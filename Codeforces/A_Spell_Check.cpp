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
        string a = "Timur",b;
        cin>>b;
        if(a.length() == b.length()){
            map<char,int> mp;
            for(int i = 0; i < b.length(); i++){
                mp[b[i]]++;
            }
            bool flag = true;
            for(int i = 0; i < a.length(); i++){
                if(mp[a[i]] > 0){
                    mp[a[i]]--;
                }
                else if(mp[a[i]] == 0){
                    flag = false;
                    break;
                }
            }
            cout<<(flag? "YES": "NO")<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}