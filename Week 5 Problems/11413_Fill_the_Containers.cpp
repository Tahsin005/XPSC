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
    int n,m;
    while(cin>>n>>m){
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int l = 0, r = INT_MAX, ans;
        while(l <= r){
            int cap = l + (r - l) / 2;
            int container = 1;
            int sum = 0;
            for(int i = 0; i < n; i++){
                if(a[i] > cap){
                    container = imax;
                    break;
                }
                sum += a[i];
                if(sum > cap){
                    container++;
                    sum = a[i];
                }
            }
            if(container <= m){
                ans = cap;
                r = cap - 1;
            }
            else{
                l = cap + 1;
            }
        }
        out(ans)
    }
    return 0;    
}