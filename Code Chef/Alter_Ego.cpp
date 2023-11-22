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
void solve(){
    int n;
    cin >> n;

	vii v(n), a, b;
	for(int i = 0; i < n; i++){
	    cin >> v[i];
	    if(v[i] % 2 == 0){
	        a.push_back(v[i]);
	    }
        else{
	        b.push_back(v[i]);
	    }
	}
	
	if(a.size() % 2 != 0 || b.size() %2 != 0){
        minus
	    return;
	}
	
	vii ans(n);
    
    sort(all(a));
    sort(all(b));
    
    int idx = 0;
	int i = 0, j = a.size()-1;
	while(i < j){
	    int x = (a[i] + a[j]) / 2;
	    ans[idx] = x;
	    ans[idx + n / 2] = (abs(a[i] - x));
	    
	    i++;
	    j--;
	    idx++;
	}
	
	i = 0, j = b.size()-1;
	while(i < j){
	    int x = (b[i] + b[j]) / 2;
	    ans[idx] = x;
	    ans[idx + n / 2] = (abs(b[i] - x));
	    
	    i++;
	    j--;
	    idx++;
	}
	
	
	for(auto val : ans){
	    cout << val << " ";
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