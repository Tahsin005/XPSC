#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;

    deque<int> deq(n);

    for (int i = 0; i < n; i++) {
        cin >> deq[i];
    }

    for (int val: deq) {
        cout << val << " ";
    }


    return 0;
}