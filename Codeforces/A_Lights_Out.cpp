#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
int main(){
    int a[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin>>a[i][j];
        }
    }
    int f[3][3] = {
        {1,1,1},
        {1,1,1},
        {1,1,1}
    };

    int dx[] = {0, 0, -1, 1};
    int dy[] = {-1, 1, 0, 0};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(a[i][j] % 2 == 1){
                f[i][j] = 1 - f[i][j];
                for(int k = 0; k < 4; k++){
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if(ni >= 0 and ni < 3 and nj >= 0 and nj < 3){
                        f[ni][nj] = 1 - f[ni][nj];
                    }
                }
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<f[i][j];
        }
        nl
    }

    return 0;    
}