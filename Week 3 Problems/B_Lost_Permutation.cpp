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
#define el '\n'
#define vtr vector
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n,s;
    cin>>n>>s;

    vtr<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int mx = *max_element(v.begin(),v.end());

    vtr<bool> vis(1005,false);
    for(int i = 0; i < n; i++){
        vis[v[i]] = true;
    }
    bool flag = false;
    int sum = 0;
    int curr = 1;
    while(true){
        if(vis[curr] == true){
            curr++;
            continue;
        }

        sum += curr;
        vis[curr] = true;
        if(sum == s){
            bool impossible = false;
            for(int i = curr; i <= mx; i++){
                if(vis[i] == false){
                    impossible = true;
                    break;
                }
            }
            if(impossible == false){
                flag = true;
            }

            break;
        }
        curr++;
        if(sum > s){
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