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
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int a[3],b[3];
    for(int i = 0; i < 3; i++){
        cin>>a[i];
    }
    for(int i = 0; i < 3; i++){
        cin>>b[i];
    }
    sort(a,a + 3,greater<int>());
    sort(b,b + 3,greater<int>());
    // for(int i = 0; i< 3; i++) cout<<a[i]<<" ";
    // nl
    // for(int i = 0; i< 3; i++) cout<<b[i]<<" ";
    // nl
    if(a[0] == b[0]){
        if(a[1] == b[1]){
            if(a[2] == b[2]){
                cout<<"Tie"<<endl;
            }
            else if(a[2] > b[2]) cout<<"Alice"<<endl;
            else cout<<"Bob"<<endl;
        }
        else if(a[1] > b[1]) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    else if(a[0] > b[0]) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
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