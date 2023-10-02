#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*
Given an array of length n and a target, return a pair whose sum is
equal to the target. If there is no pair present, return -1.

N.B: Solve this in O(n) or better

Input - 1:

7
1 4 5 11 13 10 2
13

Output - 1 : (3,6)

Input - 2:

5
9 10 2  3 5
15

Output - 2: (1,4)
*/
vector<int> targetSumPair(vector<int> &v,int target){
    unordered_map<int,int> mp;
    vector<int> ans(2,-1);
    for(int i = 0; i < v.size(); i++){
        int x = abs(v[i] - target);
        if(mp.find(x) != mp.end()){
            ans[0] = mp[x];
            ans[1] = i;
            return ans;
        }
        else{
            mp[v[i]] = i;
        }
    }
    return ans;
}

int main(){
    Tahsin
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int target;
    cin>>target;

    vector<int> ans = targetSumPair(v,target);
    cout<<ans[0]<<" , "<<ans[1]<<endl;
    return 0;
}