#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s; cin >> s;
    int n = s.length();

	bool x = false;
	if ('A' <= s[0] and s[0] <= 'Z') {
		x = true;
	}
	bool y = false;
	for (int i = 1; i < n; i++) {
		if ('a' <= s[i] and s[i] <= 'z') {
			y = true;
		}
	}
	if (y) {
		cout << s << '\n';
	}
	else {
		for (int i = 0; i < n; i++) {
			if ('a' <= s[i] and s[i] <= 'z') {
				s[i] -= 32;
			}
			else {
				s[i] += 32;
			}
		}
		cout << s << '\n';
	}
 
    
    return 0;
}