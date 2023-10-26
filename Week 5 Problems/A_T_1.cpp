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
int BinarySearch(vii& v,int target){
    int idx = -1;
    int l = 0;
    int r = v.size() - 1;

    int mid = 0;

    while(l <= r){
        mid = l + (r - l) / 2;
        if(v[mid] == target){
            idx = mid + 1;
            r = mid - 1;
            // l = mid + 1;
        }
        else if(target < v[mid]){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return idx;
}
void solve(){
    int cnt = 1;
    while(true){
        int n,q;
        cin>>n>>q;
        if(n == 0 and q == 0) break;
        else{
            vii v(n);
            for(int i = 0; i < n; i++){
                cin>>v[i];
            }
            sort(all(v));
            cout<<"CASE# "<<cnt<<":"<<el;
            cnt++;
            for(int j = 1; j <= q; j++){
                int x;
                cin>>x;
                int index = BinarySearch(v,x);
                if(index == -1){
                    cout<<x<<" not found"<<el;
                }
                else{
                    cout<<x<<" found at "<<index<<el;
                }
            }
            // for(auto& pr: v){
            //     out(pr)
            // }
            // messi
        }
    }
}
int main(){
    Tahsin
    ll t;
    t = 1;
    // cin>>t;
    for(ll cs = 1; cs <= t; cs++){
        // cout<<"Case#"<<cs<<": ";
        solve();
    }
    return 0;    
}