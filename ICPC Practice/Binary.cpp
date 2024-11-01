#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*




*/
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int zero = 0, one = 0;
    for (int i = 0; i < s.length(); i++) {
        zero += (s[i] == '0');
        one += (s[i] == '1');
    }

    cout << zero << " " << one << endl;

    return 0;
}