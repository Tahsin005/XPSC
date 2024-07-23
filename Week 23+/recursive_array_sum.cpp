#include <bits/stdc++.h>
using namespace std;

/*
    This one is from Grooking Algorithms - page: 56
 */

int rec_sum(list<int> &v) {
    if (v.size() == 1) return v.front();

    int val = v.front();
    v.pop_front();
    return val + rec_sum(v);
}

int main () {
    int n; cin >> n;
    
    list<int> v;

    while (n--) {
        int x; cin >> x;
        v.push_back(x);
    }

    
    int ans = rec_sum(v);
    cout << ans << endl;
    return 0;
}