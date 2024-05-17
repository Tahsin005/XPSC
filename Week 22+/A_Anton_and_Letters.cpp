#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    set<char> s;
    string s1;
    getline(cin, s1);
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == '{' or s1[i] == '}' or s1[i] == ',' or s1[i] == ' ') continue;
        else s.insert(s1[i]);
    }
    cout << s.size();

    return 0;
}