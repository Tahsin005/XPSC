#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
		pair <int, int> a[n];
		
		for (int i = 0; i < n; i++) {
            int x;
			cin >> x;
			a[i] = {(x % k ? x % k : k), (i + 1) * -1}; 
		}
		
		sort(a, a + n);
		
		for(int i = n - 1; i >= 0; i--)
			cout << -a[i].second << " ";
		
		cout << "\n";
    }
    
    return 0;
}