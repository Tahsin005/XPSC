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
    int a[n];
    int freq[1000] = {0};
    int cnt = 0;
    set<int> st;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        freq[a[i]]++;
        if(freq[a[i]] > 1){
            st.insert(a[i]);
        }
    }
    // for(int val: st){
    //     cout << val << " ";
    // }
    // nl
    // messi
    if(st.size() < 2){
        cout << -1 << el;
        return;
    }
    int cc = 2;

    for(int i = 0; i < n; i++){
        if(st.count(a[i])){
            cout << cc << " ";
            cc++;
            if(cc == 4) cc = 2;
            st.erase(a[i]);
        }
        else{
            cout << 1 << " ";
        }
    }
    nl
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