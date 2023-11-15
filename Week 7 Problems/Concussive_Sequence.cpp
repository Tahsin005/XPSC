// /******************************************************************/
//  *                                                                 *
//  *   |''||''|     |     ||     ||'   ;''''';.   '||'  '|.   '|'    *
//  *      ||       |||    ||     ||   ||           ||    |'|   |     *
//  *      ||      |  ||   |||||||||     \___       ||    | '|. |     *
//  *      ||     .''''|.  ||     ||          \     ||    |   |||     *
//  *      ||    .|.  .||. ||     ||.  ".......'   .||.  .|.   '|     *
//  *                                                                 *
// /******************************************************************/

#include<bits/stdc++.h>
#define ll long long
#define cyes cout << "YES" << '\n';
#define yes cout << "Yes" << '\n';
#define cno cout << "NO"<< '\n';
#define no cout << "No"<< '\n';
#define minus cout << -1 << '\n';
#define nl cout << '\n';
#define el '\n'
#define all(x) x.begin(), x.end()
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define messi cout << "Que Miras Bobo!" << '\n';
#define e4 int main()
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
//@ Problem Link: 
bool verify(vii& v){
    for(int i = 1; i < v.size() - 1; i++){
		if(v[i] > v[i + 1] and v[i] > v[i - 1]) continue;
		if(v[i] < v[i + 1] and v[i] < v[i - 1]) continue;
		return false;
	}
	return true;
}
void solve(){
	int n;
	cin >> n;
	
	vii v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	
	sort(v.begin(), v.end());
	
	vii a(n), b(n);
	int idx = 0;
	
	for(int i = 0; i < n; i++){
		if(idx >= n) idx = 1;
		a[idx] = v[i];
		idx += 2;
	}
	
	idx = 1;
	
	for(int i = 0; i < n; i++){
		if(idx >= n) idx = 0;
		b[idx] = v[i];
		idx += 2;
	}
	
	vii ans = {-1};
	
	if(verify(a)){
		ans = a;
	}
    else if(verify(b)){
		ans = b;
	}
	
	for(auto it : ans){
		cout << it << " ";
	}
    nl
	
}
e4{
    Tahsin
    ll t = 1;
    cin >> t;
    for(ll cs = 1; cs <= t; cs++){
        // cout << "Case #" << cs << ": ";
        solve();
    }
    return 0;    
}