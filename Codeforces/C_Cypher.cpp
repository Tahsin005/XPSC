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
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        if(x == 0) continue;
        string s;
        cin>>s;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == 'U'){
                v[i]--;
            }
            else if(s[j] == 'D'){
                v[i]++;
            }
            if(v[i] < 0) v[i] += 10;
            if(v[i] > 9) v[i] -= 10;
        }
    }

    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }nl
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