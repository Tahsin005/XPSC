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
bool isLucky(string& a,string& b){
    int alen = a.length();
    int blen = b.length();
    if((alen + blen) % 2 != 0){
        return false;
    }
    string t = a + b;
    int half = (alen + blen) / 2;

    string temp1,temp2;
    for(int i = 0; i < half; i++){
        temp1.push_back(t[i]);
    }
    for(int i = half; i < (alen + blen); i++){
        temp2.push_back(t[i]);
    }

    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < temp1.size(); i++){
        int x = temp1[i] - '0';
        sum1 += x;
    }

    for(int i = 0; i < temp2.size(); i++){
        int x = temp2[i] - '0';
        sum2 += x;
    }
    // cout<<sum1<<" "<<sum2<<el;
    return sum1 == sum2;
}
void solve(){
    int n;
    cin>>n;

    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    ll cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            // cout << v[i] << " " << v[j] << endl;
            if(isLucky(v[i],v[j])){
                cnt++;
            }
        }
    }
    cout<<cnt<<el;
}
int main(){
    Tahsin
    ll t;
    t = 1;
    // cin>>t;
    for(ll cs = 1; cs <= t; cs++){
        // cout<<"Case #"<<cs<<": ";
        solve();
    }
    return 0;    
}