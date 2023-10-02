#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int s1 = 0.,s2 = 0;
        for(int i = 0; i < 6; i++){
            int val = s[i] - '0';
            if(i <= 2){
                s1 += val;
            }
            else{
                s2 += val;
            }
        }
        if(s1 == s2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}