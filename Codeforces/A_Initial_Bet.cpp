#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int sum = a + b + c + d + e;
    if(sum % 5 == 0){
        int check = sum / 5;
        if(check == 0) cout<<-1<<endl;
        else
            cout<<sum / 5<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}