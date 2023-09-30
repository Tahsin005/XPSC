#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int s,t,cnt = 0;
    cin>>s>>t;
    for(int i = 0; i <= s; i++){
        for(int j = 0; j <= s; j++){
            for(int k = 0; k <= s; k++){
                if(i + j + k <= s and i * j * k <= t){
                   cnt++; 
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}