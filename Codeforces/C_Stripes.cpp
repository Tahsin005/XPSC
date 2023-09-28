#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        char ch[8][8];
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                cin>>ch[i][j];
            }
        }
        bool flag = false;
        for(int i = 0; i < 8; i++){
            int num = 0;
            for(int j = 0; j < 8; j++){
                if(ch[i][j] == 'R'){
                    num++;
                }
            }
            if(num == 8){
                flag = true;
                break;
            }
        }
        cout<<(flag? "R": "B")<<endl;
    }
    return 0;
}