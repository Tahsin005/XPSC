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
int main(){
    Tahsin
    vii v = {10, 20, 40, 30, 50};

    int elem = 20;

    int l = 0;
    int r = v.size() - 1;
    int mid = 0;
    int ans = -1;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(v[mid] == elem){
            ans = mid;
            break;
        }
        else if(mid - 1 >= l and v[mid - 1] == elem){
            ans = mid - 1;
            break;
        }
        else if(mid + 1 <= r and v[mid + 1] == elem){
            ans = mid + 1;
            break;
        }
        else if(v[mid] < elem){
            l = mid + 2;
        }
        else{
            r = mid - 2;
        }
    }
    cout<<ans<<el;
    return 0;    
}