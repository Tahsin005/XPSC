#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    string s,ans;
    cin>>s;
    for(int i = 0; i < s.length(); i++){
        if(i % 2 == 0){
            ans.push_back(s[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}