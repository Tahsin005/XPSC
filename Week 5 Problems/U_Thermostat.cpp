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
    int t;
    cin>>t;
    while(t--){
        ll l,r,x;
        ll a,b;
        cin>>l>>r>>x;
        cin>>a>>b;

        if(a == b){
            cout<<"0"<<el;
            continue;
        }
        if(abs(b - a) >= x){
            cout<<"1"<<el;
            continue;
        }
        if(b > a){
            if(b + x <= r or a - x >= l){
                cout<<"2"<<el;
            }
            else if(a + x <= r and b - l >= x){
                cout<<"3"<<el;
            }
            else{
                cout<<"-1"<<el;
            }
        }
        else{
            // a > b
            if(a + x <= r or b - x >= l){
                cout<<"2"<<el;
            }
            else if(a - x >= l and r - b >= x){
                cout<<"3"<<el;
            }
            else{
                cout<<"-1"<<el;
            }
        }
    }
    return 0;    
}