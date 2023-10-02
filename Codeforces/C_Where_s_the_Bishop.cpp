#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        char a[8][8];
        memset(a,'.',sizeof(a));
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                cin>>a[i][j];
            }
        }
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(a[i][j] == '#'){
                    if(a[i - 1][j - 1] == '#' and a[i - 1][j + 1] == '#' and a[i + 1][j - 1] == '#' and a[i + 1][j + 1] == '#'){
                        cout<<i + 1<<" "<<j + 1<<endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}