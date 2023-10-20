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
    vii v = {1,2,3,4,7,8,10,12,24};

    int l = 0;
    int r = v.size() - 1;
    int ans = -1;
    int mid = 0;

    int elem = 9;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(v[mid] == elem){
            ans = v[mid];
            break;
        }
        if(v[mid] < elem){
            l = mid + 1;
        }
        else if(v[mid] > elem){
            ans = v[mid];
            r = mid - 1;
        }
    }

    cout<<ans<<el;
    return 0;
}