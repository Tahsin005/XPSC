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
    int n;
    cin>>n;
    vii v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    int mx = 1;
    int cnt = 1;
    for(int i = 0; i < n - 1; i++){
        if(v[i] == v[i + 1]){
            cnt++;
            mx = max(mx,cnt);
        }
        else{
            cnt = 1;
        }
    }
    out(mx)
    return 0;    
}