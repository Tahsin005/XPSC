#include<bits/stdc++.h>
#define ll long long
#define cyes cout << "YES" << '\n';
#define yes cout << "Yes" << '\n';
#define cno cout << "NO"<< '\n';
#define no cout << "No"<< '\n';
#define minus cout << -1 << '\n';
#define nl cout << '\n';
#define el '\n'
#define all(x) x.begin(), x.end()
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define messi cout << "Que Miras Bobo!" << '\n';
#define e4 int main()
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
//@ Problem Link: 
e4{
    int n;
    cin >> n;
    vii v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<vii> subsets;
    for(int i = 0; i < (1 << n); i++){
        vii subset;
        for(int j = 0; j < n; j++){
            int mask = 1 << j;
            if((i & mask) != 0){
                subset.pb(v[j]);
            }
        }
        subsets.push_back(subset);
    }

    for(int i = 0; i < subsets.size(); i++){
        for(int val: subsets[i]){
            cout << val << " ";
        }
        nl
    }
    
    return 0;    
}