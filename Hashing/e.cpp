#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*
Given an array of length N, find the length of the longest subarray with 
a sum equal to 0;

8
15 -2 2 -8 1 7 10 23
Output : 5

3
1 2 3
Output : 0
*/
int longestSumZeroSubArray(vector<int> &v){
    unordered_map<int,int> mp; // To store prefix sum

    int prefixSum = 0;
    int maxlength = INT_MIN;

    for(int i = 0; i < v.size(); i++){
        prefixSum += v[i];
        if(prefixSum == 0){
            maxlength++;
        }

        if(mp.find(prefixSum) != mp.end()){
            maxlength = max(maxlength, i - mp[prefixSum]);
            // cout<<" - "<<maxlength<<endl;
        }
        else{
            mp[prefixSum] = i;
        }
    }
    return maxlength;
}
int main(){
    Tahsin
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    int ans = longestSumZeroSubArray(v);
    cout<<ans<<endl;
    return 0;
}