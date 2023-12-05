//                      ...              ...                                                             
//    .::::::::.       .@@+              %@%                                                             
//    =@@@@@@@@+       .@@+              +*+                                                             
//    -**#@@%**-       .@@+                                                                              
//       :@@-    :=+:  .@@+.==    .=+-   ::: ::: -+:                                                     
//       :@@-   #@@@@% .@@#@@@%  +@@@@@: %@% #@##@@@-                                                    
//       :@@-  +@@+*@@+.@@@+%@@=.@@+:%@% %@% #@@**@@%                                                    
//       :@@-  :--  @@*.@@+ .@@*:@@= ::: %@% #@%  *@@                                                    
//       :@@-   -*##@@*.@@+  @@* %@@@*-  %@% #@%  *@@                                                    
//       :@@-  =@@#*@@*.@@+  @@*  +#@@@* %@% #@%  *@@                                                    
//       :@@-  @@#  @@*.@@+  @@*:== .#@@ %@% #@%  *@@                                                    
//       :@@-  %@@=*@@#.@@+  @@*-@@=:%@@ %@% #@%  *@@                                                    
//       :@@-  -@@@%%@@.@@+  @@* *@@@@@- %@% #@%  *@@                                                    
//       .--.   :+= :-- --.  :-:  :=+-.  :-: :-:  :--               

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
    vii v(n+1);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }

    map<int,vii> idx;
    for(int i = 1; i <= n; i++){
        idx[v[i]].push_back(i);
    }
    bool flag = false;
    for(int i = 1; i <= n; i++){
        if(idx[v[i]].size() > 2){
            flag = true;
            break;
        }
    }
    if(flag){
        cno
        return;
    }

    vii p(n + 1,-1), q(n + 1,-1);
    multiset<int> remP,remQ;
    for(int i = 1; i <= n; i++){
        remP.insert(i);
        remQ.insert(i);
    }

    for(int i = 1; i <= n; i++){
        if(idx[i].empty())continue;
        if(idx[i].size() == 1){
            p[idx[i][0]] = i;
            remP.erase(remP.find(i));
        }
        else if(idx[i].size() == 2){
            p[idx[i][0]] = i;
            remP.erase(remP.find(i));
            q[idx[i][1]] = i;
            remQ.erase(remQ.find(i));
        }
    }

    for(int i = 1; i <= n; i++){
        if(p[i] == -1 and q[i] == -1){
            auto px = remP.end();
            px--;
            p[i] = *px;
            remP.erase(px);
            auto qx = remQ.end();
            qx--;
            q[i] = *qx;
            remQ.erase(qx);
        }
        else if(p[i]==-1){
            if(remP.empty()){
                flag = true;
                break;
            }
            auto x = remP.upper_bound(q[i]);
            if(x == remP.begin()){
                flag = true;
                break;
            }
            x--;
            p[i] = *x;
            remP.erase(x);
        }
        else if(q[i] == -1){
            if(remQ.empty()){
                flag = true;
                break;
            }
            auto x = remQ.upper_bound(p[i]);
            if(x == remQ.begin()){
                flag = true;
                break;
            }
            x--;
            q[i] = *x;
            remQ.erase(x);
        }
    }

    if(flag){
        cno
        return;
    }

    cyes
    for(int i = 1; i <= n; i++){
        cout << p[i] << " ";
    }nl
    for(int i = 1; i <= n; i++){
        cout << q[i] << " ";
    }nl
 
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