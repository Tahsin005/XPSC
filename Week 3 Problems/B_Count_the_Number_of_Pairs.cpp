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
#define el '\n'
#define vtr vector
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    // https://codeforces.com/problemset/problem/1800/B
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int small[26] = {0}, big[26] = {0};
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' and s[i] <= 'Z'){
            big[s[i] - 'A']++;
        }
        else{
            small[s[i] - 'a']++;
        }
    }

    int cnt = 0;
    for(int i = 0; i < 26; i++){
        int pr = min(small[i],big[i]);
        cnt += pr;
        small[i] -= pr;
        big[i] -= pr;

        int rempr = min(k,max(small[i],big[i]) / 2);
        k -= rempr;
        cnt += rempr;
    }
    cout<<cnt<<el;
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