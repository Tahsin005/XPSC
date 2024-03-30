#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int cnt = 1;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] != v[i + 1]) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}