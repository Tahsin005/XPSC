#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int a[10][10];
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(i == 0 or j == 0 or i == 9 or j == 9){
                    a[i][j] = 1;
                }
                else if(i == 1 or j == 1 or i == 8 or j == 8){
                    a[i][j] = 2;
                }
                else if(i == 2 or j == 2 or i == 7 or j == 7){
                    a[i][j] = 3;
                }
                else if(i == 3 or j == 3 or i == 6 or j == 6){
                    a[i][j] = 4;
                }
                else if(i == 4 or j == 4 or i == 5 or j == 5){
                    a[i][j] = 5;
                }
            }
        }
        char ch[10][10];
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                cin>>ch[i][j];
            }
        }
        ll sum = 0;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(ch[i][j] != '.'){
                    sum += a[i][j];
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}