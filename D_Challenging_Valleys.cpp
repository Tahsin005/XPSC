#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x;
            cin>>x;
            if(i == 0 || x != v.back()){
                v.push_back(x);
            }
        }
        // for(int val: v){
        //     cout<<val<<" ";
        // }cout<<endl;
        int cnt = 0;
        for(int i = 0; i < v.size(); i++){
            if((i == 0 or v[i - 1] > v[i]) and (i == v.size() - 1 or v[i] < v[i + 1])){
                cnt++;
            }
        }
        if(cnt == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}