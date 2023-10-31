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
/* 
6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6
*/

const int N = 1e5;

vtr<int> graph2[N];
bool vis[N];

void dfs(int vertex){
    // Take action on vertex after entering the vertex
    cout<<vertex<<el;
    vis[vertex] = true;
    for(int child: graph2[vertex]){
        cout<<"Parent : "<<vertex<<" Child : "<<child<<el;
        if(vis[child]) continue;
        // Take action on child node before entering the child node
        dfs(child);
        // Take action on child node after exiting the child node
    }
    // Take action on vertex before exiting the vertex
}

int main(){
    int n,m;
    cin>>n>>m;
    while(m--){
        int v1,v2;
        cin>>v1>>v2;

        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
    }

    dfs(1);
    return 0;    
}