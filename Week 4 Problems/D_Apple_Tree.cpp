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
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<'\n';
#define el '\n'
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;

const int N = (int) 1e6 + 5;
vector<int> adj[N];
vector<ll> leafs;
 
void dfs(int curr,int par){
	bool hasChild = false;
	for(auto& i: adj[curr]){
		if(i == par) continue;
		hasChild = true;
		dfs(i,curr);
		leafs[curr] += leafs[i];
	}
	if(!hasChild){
		leafs[curr] = 1;
	}
}
void solve(){
    int n;
    cin>>n;
   	for(int i = 0; i <= n; i++){
   		adj[i].clear();
   	}
   	leafs.assign(n + 2,0);
   	for(int i = 1; i <= n- 1; i++){
   		int u,v;
        cin>>u>>v;
   		adj[u].push_back(v);
   		adj[v].push_back(u);
   	}
   	dfs(1,-1);
   	int q;
    cin>>q;
   	while(q--){
   		int x,y;
        cin>>x>>y;
   		ll ans = leafs[x] * leafs[y];
   		cout<<ans<<el;
   	}
}
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}