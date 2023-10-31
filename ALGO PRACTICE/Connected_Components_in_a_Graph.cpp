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
#define pii pair<int,int>
#define out(x) cout<<x<<"\n";
#define out2(x,y) cout<<x<<" "<<y<<"\n";
#define messi cout<<"Que Miras Bobo!"<<'\n';
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
const int N = 1e5 + 7;
vtr<int> graph[N];
bool vis[N];

vector<vector<int>> cc;
vii current_cc;
void dfs(int vertex){
    vis[vertex] = true;
    current_cc.push_back(vertex);
    for(int child: graph[vertex]){
        if(vis[child]) continue;
        dfs(child);
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(vis[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        cnt++;
    }
    cout<<cnt<<el;

    // Connected Component Print
    for(auto val: cc){
        for(int c: val){
            cout<<c<<" ";
        }nl
    }
    return 0;    
}