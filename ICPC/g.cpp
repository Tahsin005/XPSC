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
// #define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n = s.length();

    float over = n / 6;
    int rem = n % 6;
    float r = (float)rem * 0.1;
    float o = (float)over;
    float fo = o + r;
    int cntrun = 0;
    int cntwic = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'W'){
            cntwic++;
        }
        else{
            int x = s[i] - '0';
            cntrun += x;
        }
    }
    if(fo <= 1.0){
        if(cntrun <= 1 and cntwic > 1){
            printf("%.1f Over %d Run %d Wickets.\n",fo,cntrun,cntwic);
        }
        else if(cntrun > 1 and cntwic <= 1){
            printf("%.1f Over %d Runs %d Wicket.\n",fo,cntrun,cntwic);
        }
        else if(cntrun <= 1 and cntwic <= 1){
            printf("%.1f Over %d Run %d Wicket.\n",fo,cntrun,cntwic);
        }
        else if(cntrun > 1 and cntwic > 1){
            printf("%.1f Over %d Runs %d Wickets.\n",fo,cntrun,cntwic);
        }
    }
    else{
        if(cntrun <= 1 and cntwic > 1){
            printf("%.1f Overs %d Run %d Wickets.\n",fo,cntrun,cntwic);
        }
        else if(cntrun > 1 and cntwic <= 1){
            printf("%.1f Overs %d Runs %d Wicket.\n",fo,cntrun,cntwic);
        }
        else if(cntrun <= 1 and cntwic <= 1){
            printf("%.1f Overs %d Run %d Wicket.\n",fo,cntrun,cntwic);
        }
        else if(cntrun > 1 and cntwic > 1){
            printf("%.1f Overs %d Runs %d Wickets.\n",fo,cntrun,cntwic);
        }
    }
}
int main(){
    // Tahsin
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}