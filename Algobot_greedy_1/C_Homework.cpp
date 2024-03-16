#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s; cin >> s;
    int k; cin >> k;

    map <char, int> mp;
    for (int i = 0; i < s.length(); i++) {
        mp[s[i]]++;
    }
    if (s.length() <= k) {
        cout << 0 << '\n';
        return 0;
    }
    vector<pair<char, int>> v(mp.begin(), mp.end());

    sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });
    int sum = 0, idx = 1;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i].second;
        if (sum > k) {
            break;
        } else {
            mp[v[i].first] = 0;
        }
    }
    string res = "";
    int cnt = 0;

    set<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (mp[s[i]] > 0) {
            res += s[i];
            st.insert(s[i]);
        }
    }
    cout << st.size() << '\n';
    cout << res << '\n';

    return 0;
}