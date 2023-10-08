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
void solve(){
    string s;
    cin>>s;
    s = "0" + s;
    int n = int(s.size());
    int after = n;
    for(int i = n - 1; i >= 0; i--){
        if(s[i] >= '5'){
            s[i] = '0';
            after = i;
            int j = i - 1;

            while(s[j] == '9'){
                s[j] = '0';
                j--;
            }
            s[j]++;
        }
    }

    for(int i = after; i < n; i++){
        s[i] = '0';
    }
    if(s.front() == '0'){
        s = s.substr(1);
    }
    cout<<s<<'\n';
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