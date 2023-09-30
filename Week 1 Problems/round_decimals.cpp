#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    double a;
    cin>>a;
    double x = floor(a);
    double diff = abs(a - x);
    if(diff < 0.500){
        cout<<x<<endl;
    }
    else{
        cout<<ceil(a)<<endl;
    }

    return 0;
}