#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v(n, 0);
    for(int i = 1; i <= n - 1; i++){
        cin >> v[i];
    }
    int a, b; cin >> a >> b;
    
    for (int i = 1; i <= n - 1; i++) {
        v[i] += v[i - 1];
    }
    cout << v[b - 1] - v[a - 1] << endl;

    
    return 0;
}