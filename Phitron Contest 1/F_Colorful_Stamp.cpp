#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main() {
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag = true;
        for(int i = 0; i < n; i++){
            while(i < n and s[i] == 'W'){
                i++;
            }
            if(i == n){
                break;
            }
            int blue = 0, red = 0;
            while(i < n and s[i] != 'W'){
                if(s[i] == 'R'){
                    red++;
                }
                else{
                    blue++;
                }
                i++;
            }
            if(blue == 0 or red == 0){
                flag = false;
                break;
            }
        }
        cout<<(flag? "YES" : "NO")<<endl;
    }
    return 0;
}