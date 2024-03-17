#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    vector<int> result;
    for (int val : v) {
        if (val < 38) {
            result.push_back(val);
        } else {
            int mo5 = ((val / 5) + 1) * 5;
            if (mo5 - val < 3) {
                result.push_back(mo5);
            } else {
                result.push_back(val);
            }
        }
    }

    for (int val : result) {
        cout << val << endl;
    }
    return 0;
}
