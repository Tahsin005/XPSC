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
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
bool isPrime(int n){
    if(n <= 1){
        return false;
    }
 
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int numOfDivisior(int num){
    int cnt = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            if(isPrime(i)){
                cnt++;
            }
            if(cnt > 2){
                break;
            }
        }
    }
    return cnt;
}
void solve(){
    int n;
    cin>>n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int x = numOfDivisior(i);
        if(x == 2){
            ans++;
        }
    }
    cout<<ans<<endl;
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