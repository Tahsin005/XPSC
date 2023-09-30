#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int a,b,c;
    cin>>a>>b>>c;
    bool flag = false;
    int sum = 0;
    for(int i = 0; i <= c; i++){
        for(int j = 0; j <= c; j++){
            sum = (a * i) + (b * j);
            if(sum == c){
                flag = true;
                break;
            }
        }
    }
    if(flag == true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}