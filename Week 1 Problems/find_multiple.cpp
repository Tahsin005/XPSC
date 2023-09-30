#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int a,b,c;
    cin>>a>>b>>c;
    while(true){
        if(c >= a and c <= b){
            cout<<c<<endl;
            break;
        }
        else if(c > b){
            cout<<"-1"<<endl;
            break;
        }
        else{
            c *= 2;
        }
    }
    return 0;
}