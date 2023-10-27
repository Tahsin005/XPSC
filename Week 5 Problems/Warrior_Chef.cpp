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
bool check(int a[],int n,int x,int y){
    for(int i = 0; i < n; i++){
        if(x >= a[i]){
            continue;
        }
        else if(y > a[i]){
            y -= a[i];
        }
        else{
            return false;
        }
    }
    return true;
}
int BinarySearch(int a[],int n,int l,int h,int k){
    int ans = imax;
    while(l <= h){
        int m = l + (h - l) / 2;
        if(check(a,n,m,k)){
            ans = m;
            h = m - 1;
        }
        else{
            l = m + 1;
        }
    }   
    return ans;
}
void solve(){
    int n,h;
    cin>>n>>h;
    int a[n];
    int s = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        s += a[i];
    }
    if(s < h) cout<<"0"<<el;
    else cout<<BinarySearch(a,n,0,s,h)<<el;
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