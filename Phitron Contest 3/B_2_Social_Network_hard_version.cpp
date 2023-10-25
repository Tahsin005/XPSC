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
int main(){
    int n,k;
	cin>>n>>k;
	
	queue<int> q;
	map<int,int> mp;
	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		if(mp.count(x) == 0){
			if(q.size() >= k){
				int cur = q.front();
				q.pop();
				mp.erase(cur);
			}
            mp[x]++;
			q.push(x);
		}
	}
	vii ans;
	while(!q.empty()){
		ans.push_back(q.front());
		q.pop();
	}
	reverse(ans.begin(), ans.end());
	cout<<ans.size()<<el;
	for(auto& val : ans){
        cout<<val<<" ";
    }
    nl
    return 0;    
}