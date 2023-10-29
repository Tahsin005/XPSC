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
void solve(){
    string a,b;
    cin>>a>>b;

    int valA = 0, valB = 0;
    for(int i = 0; i < a.length(); i++){
        if(a[i] == 'X'){
            valA += 4;
        }
        else if(a[i] == 'S'){
            if(valA > 0){
                valA = (-1) * valA;
                valA += 1;
            }
            else{
                valA += 1;
            }
        }
        else if(a[i] == 'M'){
            valA += 2;
        }
        else if(a[i] == 'L'){
            valA += 3;
        }
    }
    for(int i = 0; i < b.length(); i++){
        if(b[i] == 'X'){
            valB += 4;
        }
        else if(b[i] == 'S'){
            if(valB > 0){
                valB = (-1) * valB;
                valB += 1;
            }
            else{
                valB += 1;
            }
        }
        else if(b[i] == 'M'){
            valB += 2;
        }
        else if(b[i] == 'L'){
            valB += 3;
        }
    }
    // cout<<valA<<" "<<valB<<el;
    if(valA > valB){
        cout<<">"<<el;
    }
    else if(valA < valB){
        cout<<"<"<<el;
    }
    else{
        cout<<"="<<el;
    }
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