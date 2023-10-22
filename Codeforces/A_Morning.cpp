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
#define nl cout<<'\n';
#define el '\n'
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n;
    cin>>n;

    while(n--){
        string s;
        cin>>s;
        int ans = 0;

        int d1 = s[0] - '0';
        if(d1 == 0){
            ans = ans + (abs(10 - d1));
        }
        else if(d1 == 1){
            ans++;
        }
        else{
            ans = ans + d1;
        }
        for(int i = 1; i < s.length(); i++){
            int x = s[i - 1] - '0';
            int y = s[i] - '0';

            if(x == 0 and y > 0){
                ans = ans + (abs(10 - y) + 1);
            }
            else if(y == 0 and x > 0){
                ans = ans + (abs(10 - x) + 1);
            }
            else{
                ans = ans + (abs(x - y) + 1);
            }
        }
        cout<<ans;
        nl
    }
}
int main(){
    Tahsin
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}