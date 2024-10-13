#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int k;
    cin >> k;

    string s;
    cin >> s;

    map<char, int> mp;

    for(int i = 0; i < s.length(); i++) {
        mp[s[i]]++;
    }

    for (auto [x, y]: mp) {
        if (y % k != 0) {
            cout << -1 << endl;
            return;
        }
    }

    string ans = "";
	for (auto [x, y]: mp) {
		for (int i = 0; i < y / k; i++) {
			ans += x;
		}
	}
	for (int i = 0; i < k; i++) {
		cout << ans;
	}
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}