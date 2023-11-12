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
#define yes cout << "YES" << endl;
#define no cout << "NO"<< endl;
#define nl cout << '\n';
#define el '\n'
#define all(x) x.begin(), x.end()
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " "<< y << '\n';
#define messi cout << "Que Miras Bobo!" << '\n';
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n;
    cin >> n;
    vll a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    ll ans = 0;

    for(int i = 0; i < n; i++){
        if(i == n - 1){
            ans += a[i];
            break;
        }
        else if(a[i] + (b[i] + a[i + 1]) <= a[i + 1] + (b[i + 1] + a[i])){
            ans += a[i];
            a[i + 1] += b[i];
        }
        else{
            ans += a[i + 1];
            a[i] += b[i + 1];
            swap(a[i + 1],a[i]);
            swap(b[i], b[i + 1]);
        }
    }
    cout << ans << '\n';
    
}
int main(){
    Tahsin
    ll t;
    // t = 1;
    cin >> t;
    for(ll cs = 1; cs <= t; cs++){
        // cout << "Case #" << cs << ": ";
        solve();
    }
    return 0;    
}