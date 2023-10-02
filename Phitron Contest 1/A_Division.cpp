#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a >= 1900) cout<<"Division 1"<<endl;
        else if(a >= 1600 and a <= 1899) cout<<"Division 2"<<endl;
        else if(a >= 1400 and a <= 1599) cout<<"Division 3"<<endl;
        else if(a <= 1399) cout<<"Division 4"<<endl;
    }
    return 0;
}