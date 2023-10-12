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
    vector<int> v(3);
    int mn = INT_MAX;
    for(int i = 0; i < 3; i++){
        cin>>v[i];
        mn = min(v[i],mn);
    }

    int cnt = 0;
    bool flag = true;
    for(int i = 0; i < 3; i++){
        if(v[i] > mn){
            if(v[i] % mn == 0){
                int div = v[i] / mn;
                div--;
                cnt += div;
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
    }

    if(flag == true){
        if(cnt <= 3) yes
        else no
    }
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