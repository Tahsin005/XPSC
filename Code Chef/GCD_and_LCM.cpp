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
int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    return gcd(b, a % b);
}
int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}
void solve(){
    int x,y,k;
    cin>>x>>y>>k;

    while(x != y and k--){
        if(x > y){
            x = __gcd(x,y);
            y = lcm(x,y);
        }
        else{
            y = __gcd(x,y);
            x = lcm(x,y);
        }
    }
    cout<<x + y<<el;
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