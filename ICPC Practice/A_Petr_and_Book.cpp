#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n;
    cin >> n;

    deque<int> deq(7);

    for (int i = 0; i < 7; i++) cin >> deq[i];

    int sum=0;
    int i = 0;
    while (true) {
        sum += deq[i];
        if (sum >= n) {
            cout << i + 1;
            break;
        }
        if (i == 6) {
            i = 0;
        } else {
            i++;
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}