#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin >> n;
    map <int, int> mp;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x == 4) cnt++;
        else mp[x]++;
    }
    int temp = (min(mp[3], mp[1]));
    cnt += temp;
    mp[3] -= temp;
    mp[1] -= temp;

    cnt += mp[3];
    if (mp[2] & 1) {
        cnt += (mp[2] / 2);
        cnt++;
        mp[1] -= 2;
        cnt += (mp[1] / 4);
        if (mp[1] % 4 != 0 and mp[1] > 0) {
            cnt++;
        }
    } else {
        cnt += (mp[2] / 2);
        cnt += (mp[1] / 4);
        if (mp[1] % 4 != 0) {
            cnt++;
        }
    }
    
    cout << cnt << '\n';
    return 0;
}`