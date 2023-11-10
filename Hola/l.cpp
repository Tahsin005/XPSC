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
class Solution {
    int conquer(vector<int>& n, int low, int mid, int high, int l, int r) {
        int lsum = INT_MIN;
        int sum = 0;
        for (int i = mid; i >= low; i--) {
            sum += n[i];
            if (lsum < sum) {
                lsum = sum;
            }
        }
        sum = 0;
        int rsum = INT_MIN;
        for (int i = mid + 1; i <= high; i++) {
            sum += n[i];
            if (rsum < sum) {
                rsum = sum;
            }
        }
        return max(l, max(r, lsum + rsum));
    }

    int divide(vector<int>& n, int low, int high) {
        if (low >= high) {
            return n[low];
        }
        int mid = (low + high) / 2;
        int l = divide(n, low, mid);
        int r = divide(n, mid + 1, high);
        return conquer(n, low, mid, high, l, r);
    }

public:
    int maxSubArray(vector<int>& n) {
        int low = 0;
        int high = n.size() - 1;
        return divide(n, low, high);
    }
};
int main(){
    int n;
    cin >> n;
    vii v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    Solution sol;
    int ans = sol.maxSubArray(v);
    cout<<ans<<el;

    return 0;    
}