// /******************************************************************/
//  *                                                                 *
//  *   |''||''|     |     ||     ||'   ;''''';.   '||'  '|.   '|'    *
//  *      ||       |||    ||     ||   ||           ||    |'|   |     *
//  *      ||      |  ||   |||||||||     \___       ||    | '|. |     *
//  *      ||     .''''|.  ||     ||          \     ||    |   |||     *
//  *      ||    .|.  .||. ||     ||.  ".......'   .||.  .|.   '|     *
//  *                                                                 *
// /******************************************************************/

#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n;
    cin>>n;
    char a[2][n];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < n; j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     nl
    // }
    bool flag = true;
    for(int i = 0; i < n; i++){
        if(a[0][i] == 'R' and a[1][i] == 'R'){
            continue;
        }
        if(a[0][i] == 'G' and (a[1][i] == 'G' or a[1][i] == 'B')){
            continue;
        }
        if(a[0][i] == 'B' and (a[1][i] == 'B' or a[1][i] == 'G')){
            continue;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag == true) yes
    else no
}
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}