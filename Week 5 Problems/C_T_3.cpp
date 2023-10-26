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
#define all(x) x.begin(), x.end()
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define pii pair<int,int>
#define out(x) cout<<x<<"\n";
#define out2(x,y) cout<<x<<" "<<y<<"\n";
#define messi cout<<"Que Miras Bobo!"<<'\n';
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
bool isValid(int diff,int a[],int n,int c){
    int cnt = 1;
    int last = 0;
    for(int i = 1; i < n; i++){
        if(abs(a[i] - a[last]) >= diff){
            cnt++;
            last = i;
        }
    }
    return c <= cnt;
}
void solve(){
    int n,c;
    cin>>n>>c;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    sort(a,a + n);

    int l = 0;
    int r = imax;
    int mid = 0;
    int ans;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(isValid(mid,a,n,c)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    out(ans)
}
int main(){
    Tahsin
    ll t;
    // t = 1;
    cin>>t;
    for(ll cs = 1; cs <= t; cs++){
        // cout<<"Case #"<<cs<<": ";
        solve();
    }
    return 0;    
}