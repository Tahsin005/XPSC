#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    map<string,int> mp;

    while(true){
        string s;
        cin>>s;
        if(s == "kufa"){
            break;
        }
        else{
            mp[s]++;
        }
    }
    for(auto val: mp){
        cout<<val.first<<" "<<val.second<<endl;
    }
    return 0;
}