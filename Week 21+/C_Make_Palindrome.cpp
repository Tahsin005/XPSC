#include<bits/stdc++.h>
#define ll long long
using namespace std;
void print_palindrome1(vector<ll> &freq,ll n) {
    string ans(n, '&');
    ll i = 0, j = n - 1;
    char ch;
    for (ll k = 0; k < 26; k++) {
        while (freq[k]) {
            ans[i] = k + 'a';
            ans[j] = k + 'a';
            freq[k] -= 2;
            i++;
            j--;
        }
    }
    cout << ans << '\n';
    return;
}
void print_palindrome2(vector<ll> &freq,ll n) {
    string ans(n, '&');
    ll i = 0, j = n - 1;
    char ch;
    for (ll k = 0; k < 26; k++) {
        if (freq[k] & 1) {
            freq[k]--;
            ch = k + 'a';
        }
        while (freq[k]) {
            ans[i] = k + 'a';
            ans[j] = k + 'a';
            freq[k] -= 2;
            i++;
            j--;
        }
    }
    ans[i] = ch;
    cout << ans << '\n';
    return;
}
int main(){
    string s;
    cin >> s;
    ll n = s.size();
    if (n == 1) {
        cout << s << '\n';
        return 0;
    }
    vector<ll> freq(26, 0);
    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
    }

    vector<char> vc;
    for (int i = 0; i < 26; i++) {
        if (freq[i] & 1) {
            vc.push_back(i + 'a');
        }
    }
    int sz = vc.size();
    if (n & 1) {
        if (sz == 1) {
            print_palindrome2(freq, n);
        }
        else {
            sort (vc.begin(), vc.end());
            ll i = 0, j = sz - 1;

            while (i < j) {
                freq[vc[i] - 'a']++;
                freq[vc[j] - 'a']--;
                i++;
                j--;
            }
            print_palindrome2(freq, n);

        }
    } else {
        if (sz == 0) {
            print_palindrome1(freq, n);

        }
        else {
            sort (vc.begin(), vc.end());
            int i = 0, j = sz - 1;

            while (i < j) {
                freq[vc[i] - 'a']++;
                freq[vc[j] - 'a']--;
                i++;
                j--;
            }
            print_palindrome1(freq, n);
        }

    }
    return 0;
}