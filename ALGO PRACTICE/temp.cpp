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
13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
8 12
4 9
4 10
10 11
*/

const int N = 1e5;
/*
    Given Q queries, Q <= 1e5
    In each given query V,
    Print subtree sum of V , and number of even elements
    in subtree of V
*/
vtr<int> g[N];

int subtree_sum[N];
int even_cnt[N];
void dfs(int vertex,int par = 0){
    // Take action on vertex after entering the vertex
    if(vertex % 2 ==0) even_cnt[vertex]++;

    subtree_sum[vertex] += vertex;

    for(int child: g[vertex]){
        // Take action on child node before entering the child node
        if(child == par) continue;
        dfs(child,vertex);
        // Take action on child node after exiting the child node
        subtree_sum[vertex] += subtree_sum[child];

        even_cnt[vertex] += even_cnt[child];
    }
    // Take action on vertex before exiting the vertex
}
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n - 1; i++){
        int v1,v2;
        cin>>v1>>v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);

    for(int i = 1; i <= n; i++){
        cout<<subtree_sum[i]<<" "<<even_cnt[i]<<el;
    }
    // int q;
    // cin>>q;
    // while(q--){
    //     int v;
    //     cin>>v;
    //     cout<<subtree_sum[v]<<" "<<even_cnt[v]<<el;
    // }

    return 0;
}