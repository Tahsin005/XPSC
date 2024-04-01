#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt; cin >> tt; while (tt--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        
        int mex = 0;
        vector<int> p(n);
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++) {
            if (v[i] >= 0) {
                mex++;
                while (!pq.empty() and pq.top() == mex) {
                    mex++;
                    pq.pop();
                }
                p[i] = mex - v[i];
            } else {
                p[i] = mex - v[i];
                pq.push(p[i]);
            }
        }
        for (auto val : p) {
            cout << val << " ";
        } cout << '\n';
    }
    
    return 0;
}