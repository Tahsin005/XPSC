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
void solve(){
    int n;
    cin>>n;
    vii a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    int ans = n;

    ll segSum = 0;

    for(int i = 0; i < n; i++){
        segSum += a[i];
        ll sum = 0;
        int len = 0, mxLen = i + 1;
        bool possible = false;
        for(int j = i + 1; j < n; j++){
            if(sum + a[j] > segSum){
                break;
            }
            if(j == n - 1 and sum + a[j] == segSum){
                mxLen = max(mxLen, len + 1);
                possible = true;
                break;
            }
            sum += a[j];
            len++;
            if(sum == segSum){
                mxLen = max(mxLen, len);
                len = 0;
                sum = 0;
            }
        }
        if(possible){
            ans = min(ans,mxLen);
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