#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nl cout << '\n';
#define el '\n'
#define vtr vector
#define vii vector<int>
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define pii pair<int, int>
#define out(x) cout << x << "\n";
#define out2(x, y) cout << x << " " << y << "\n";
#define messi cout << "Que Miras Bobo!" << '\n';
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
/*
6 9
1 3 4
1 5 3
3 5 2
3 4 7
3 6 8
3 2 9
2 6 1
4 6 2
5 6 3
*/

const int N = 1e3;
int graph1[N][N];

int main(){
    int n, m;
    cin >> n >> m;
    while(m--){
        int v1, v2, w;
        cin >> v1 >> v2 >> w;
        graph1[v1][v2] = w;
        graph1[v2][v1] = w;
    }

    // space complexity: o(n^2)
    return 0;
}