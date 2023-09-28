#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        if(a == (b + c)){
            cout<<"YES"<<endl;
        }
        else if(b == (a + c)){
            cout<<"YES"<<endl;
        }
        else if(c == (a + b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}