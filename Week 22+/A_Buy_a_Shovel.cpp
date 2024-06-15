#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
	int n, s, x;
	cin >> n >> s;
	int i = 1;
	x = n;
 
	
	while (true) {
		if (n % 10 == s) {
			cout << i;
			break;
		}
		else if (n % 10 == 0) {
			cout << i;
			break;
		}
		else {
            i++;
			n = x * i;
		}
 
	}
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}