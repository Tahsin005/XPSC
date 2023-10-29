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
class Solution{
public:
    int bs(vector<int>& v){
        if(v.size() == 1){
            return 0;
        }
        int l = 0;
        int r = v.size() - 1;
        while(l <= r){
            int mid = (l + r) / 2;
            if(mid > 0 && mid < v.size() - 1){
                if(v[mid] > v[mid - 1] and v[mid] > v[mid + 1]){
                    return mid;
                }
                else if(v[mid - 1] > v[mid]){
                    r = mid - 1;
                }
                else if(v[mid + 1] > v[mid]){
                    l = mid + 1;
                }
            }
            else if(mid == 0){
                if(v[mid] > v[mid + 1]){
                    return 0;
                }
                else{
                    return 1;
                }
            }
            else if(mid == v.size() - 1){
                if(v[mid] > v[mid - 1]){
                    return v.size() - 1;
                }
                else{
                    return v.size() - 2;
                }
            }
        }
        return -1;
    }
};
int main(){
    vii v = {10,2,3,90,67};
    // vii v = {5,10,20,15};
    Solution sol;
    int x = sol.bs(v);
    cout<<x<<el;
    return 0;    
}