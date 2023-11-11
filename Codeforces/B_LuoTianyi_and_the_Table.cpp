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
#define out(x) cout << x << "\n";
#define out2(x,y) cout << x << " "<< y << "\n";
#define messi cout << "Que Miras Bobo!" << '\n';
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;

    if(n > m) swap(n, m);

    vll a(n * m);
    for(int i = 0; i < n * m; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll mn0 = a[0];
    ll mn1 = a[1];
    ll mx0 = a[(n * m) - 1];
    ll mx1 = a[(n * m) - 2];

    ll ans1 = 0;
    ans1 = ((n * m) - n) * (mx0 - mn0);
    for(int i = 1; i <= (n - 1); i++){
        ans1 += (mx1 - mn0);
    }

    ll ans2 = 0;
    ans2 = ((n * m) - n) * (mx0 - mn0);
    for(int i = 1; i <= (n - 1); i++){
        ans2 += (mx0 - mn1);
    }

    cout << max(ans1, ans2) << el;
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