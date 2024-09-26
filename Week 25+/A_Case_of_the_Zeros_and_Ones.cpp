#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; 
    cin >> n;
    string s; cin >> s;

    int zeros = 0, ones = 0;

    for (int i = 0; i < n; i++) {
        zeros += (s[i] == '0');
        ones += (s[i] == '1');
    }    
    cout << max(zeros, ones) - min(zeros, ones) << endl;
    return 0;
}