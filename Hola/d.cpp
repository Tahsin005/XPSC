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
#define pii pair<int,int>
#define out(x) cout<<x<<"\n";
#define out2(x,y) cout<<x<<" "<<y<<"\n";
#define messi cout<<"Que Miras Bobo!"<<'\n';
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vii v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    if(k == 0){
        vii ans;
        ans.push_back(v[n - 1]);
        for(int i = 0; i < n - 1; i++){
            ans.push_back(v[i]);
        }
        for(int val : ans){
            cout<<val<<" ";
        }
    }
    else{
        vii ans;
        for(int i = 1; i < n; i++){
            ans.push_back(v[i]);
        }
        ans.push_back(v[0]);
        for(int val : ans){
            cout<<val<<" ";
        }

    }
    return 0;    
}