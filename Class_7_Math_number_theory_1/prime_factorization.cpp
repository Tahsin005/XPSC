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
    cin >> n;
    map<int,int> cnt;
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            cnt[i]++;
            n /= i;
        }
    }
    if(n > 1){
        cnt[n]++;
    }
    for(auto [x,y]: cnt){
        cout << x << " " << y << el;
    }
    return 0;    
}