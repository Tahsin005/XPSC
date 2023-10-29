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
    vii v = {1,3,8,10,15};
    int x = 12;

    int l = 0;
    int r = v.size() - 1;
    int mid;
    bool flag = false;
    int idx = -1;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(v[mid] == x){
            flag = true;
            idx = mid;
            break;
        }
        else if(v[mid] > x){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }


    if(flag == true){
        cout<<v[idx]<<el;
    }
    else{
        if(abs(v[l] - x) < abs(v[r] - x)){
            cout<<v[l]<<el;
        }
        else{
            cout<<v[r]<<el;
        }
    }

    return 0;    
}