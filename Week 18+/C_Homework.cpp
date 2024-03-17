#include <bits/stdc++.h>
using namespace std;
int main () {
    int T;
    T = 1;
    while (T--) {
        string s;
        cin >> s;
        int n = s.size();
        int k;
        cin >> k;

        map<char, vector<int>> freq;

        for (int i = 0; i < n; i++) {
            freq[s[i]].push_back(i);
        }

        vector<pair<char, vector<int>>> rex;

        for (auto i : freq) {
            rex.push_back(i);
        }

        sort(rex.begin(), rex.end(), [&](pair<char, vector<int>> p1, pair<char, vector<int>> p2) {
			return p1.second.size() < p2.second.size();
		});

        vector<bool> rakhbo(n, true);

        for (int i = 0; i < rex.size() and k > 0; i++) {
            while (k > 0 and !rex[i].second.empty()) {
                rakhbo[rex[i].second.back()] = false;
                k--;
                rex[i].second.pop_back();
            }
        }

        set<char> unique_chars;

        for (int i = 0; i < n; i++) {
            if (rakhbo[i]) {
                unique_chars.insert(s[i]);
            }
        }

        cout << unique_chars.size() << '\n';
        for (int i = 0; i < n; i++) {
            if (rakhbo[i]) {
                cout << s[i];
            }
        }
        cout << '\n';
    }

    return 0;
}
