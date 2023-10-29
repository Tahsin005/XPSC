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
    vii v = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1};
    // Suppose it as an infinit array

    int k = 1;

    int l = 0;
    int r = 1;

    while(k > v[r]){
        l = r;
        r *= 2;
    }
    int idx = 0;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(v[mid] == k){
            idx = mid;
            r = mid - 1;
        }
        else if(v[mid] > k){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    out(idx)
    return 0;    
}