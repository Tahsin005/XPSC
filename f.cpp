#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    map <int,int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    int mex = 0;
    for (int i = 0; i < n; i++) {
        mex = max (mex, mp[v[i]]);
    }
    cout << mex << endl;
    return 0;
}