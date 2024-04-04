#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    int n; cin >> n;
    vector <string> tickets(n);
    for (int i = 0; i < n; i++) cin >> tickets[i];

    map<pair<int, int>, int> mp;
    sort(tickets.begin(), tickets.end(), [&](string &a, string &b) {
        return a.size() < b.size();
    });
    int ans = n;
    for (auto ticket : tickets) {
        int ticket_len = ticket.size();
        for (int i = 1; i <= ticket_len; i++) {
            if ((i + ticket_len) & 1) continue;

            int mid = (i + ticket_len) / 2;
            int req = 0;
            for (int i = 0; i < mid; i++) req += (ticket[i] - '0');
            for (int i = mid; i < ticket_len; i++) req -= (ticket[i] - '0');

            if (req >= 0) ans += mp[{i, req}];
        }

        reverse(ticket.begin(), ticket.end());

        for (int i = 1; i <= ticket_len; i++) {
            if ((i + ticket_len) & 1) continue;

            int mid = (i + ticket_len) / 2;
            int req = 0;
            for (int i = 0; i < mid; i++) req += (ticket[i] - '0');
            for (int i = mid; i < ticket_len; i++) req -= (ticket[i] - '0');

            if (req >= 0) ans += mp[{i, req}];
        }

        int sum = 0;
        for (int i = 0; i < ticket_len; i++) sum += (ticket[i] - '0');

        mp[{ticket_len, sum}]++;

    }
    cout << ans << '\n';

    return 0;
}