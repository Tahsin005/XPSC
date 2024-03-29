#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, x;
    cin >> n >> x;
    map <string, int> freq;
    string f = "",  m ="", l = "";
    while (n--) {
        string s;
        cin >> s;
        string temp = s;
        reverse(temp.begin(), temp.end());
        if (s == temp) {
            m = s;
        } else if (freq.find(temp) != freq.end()) {
            f = s + f;
            l = l + temp;
        }
        freq[s]++;
    }
    cout << f.length() + m.length() + l.length() << '\n';
    cout << f << m << l << '\n';
    return 0;
}