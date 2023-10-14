#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int n = 8;
    int arr[] = {12,-1,-7,8,-15,30,16,28};
    int i = 0, j = 0;
    queue<int> q;
    vector<int> ans;
    int k = 3;
    while(j < n){
        if(arr[j] < 0){
            q.push(arr[j]);
        }
        if(j - i + 1 < k){
            j++;
        }
        else if(j - i + 1 == k){
            if(q.size() == 0){
                ans.push_back(0);
            }
            else{
                ans.push_back(q.front());
                if(arr[i] == q.front()){
                    q.pop();
                }
            }
            i++;
            j++;
        }
    }
    for(int val: ans){
        cout<<val<<" ";
    }
    return 0;
}