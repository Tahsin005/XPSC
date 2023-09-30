#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int a, b;
    cin>>a>>b;
    if(a > b){
        cout<<0<<endl;
    }
    else{
        int x = abs(a - b);
        cout<<x + 1<<endl;
    }
    return 0;
}