#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void printBinary(int n){
    for(int i = 10; i >= 0; --i){
        cout<<((n>>i) & 1);
    } cout<<endl;
}
int main(){
    Tahsin
    printBinary(10);
    cout<<"1024"<<" - "<<((10>>10) & 1)<<endl;
    cout<<"512"<<" - "<<((10>>9) & 1)<<endl;
    cout<<"256"<<" - "<<((10>>8) & 1)<<endl;
    cout<<"128"<<" - "<<((10>>7 ) & 1)<<endl;
    cout<<"64"<<" - "<<((10>>6) & 1)<<endl;
    cout<<"32"<<" - "<<((10>>5) & 1)<<endl;
    cout<<"16"<<" - "<<((10>>4) & 1)<<endl;
    cout<<"8"<<" - "<<((10>>3) & 1)<<endl;
    cout<<"4"<<" - "<<((10>>2) & 1)<<endl;
    cout<<"2"<<" - "<<((10>>1) & 1)<<endl;
    cout<<"1"<<" - "<<((10>>0) & 1)<<endl;
    
    return 0;
}