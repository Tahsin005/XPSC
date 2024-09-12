#include<bits/stdc++.h>
#define ll long long
using namespace std;
   
int main(){
    int n; 
    cin >> n;

    string s; 
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n - 2; i++) {
        cnt += (s[i] == 'x' and s[i + 1] == 'x' and s[i + 2] == 'x');
    }
    cout << cnt << '\n';
    return 0;
}