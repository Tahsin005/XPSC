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

#include <bits/stdc++.h>
#define ll long long
#define cyes cout << "YES" << '\n';
#define yes cout << "Yes" << '\n';
#define cno cout << "NO" << '\n';
#define no cout << "No" << '\n';
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
#define pii pair<int, int>
#define out(x) cout << x << '\n';
#define out2(x, y) cout << x << " " << y << '\n';
#define messi cout << "Que Miras Bobo!" << '\n';
#define e4 int main()
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
//@ Problem Link:
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool flag = true;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            sum++;
        }
        else{
            sum--;
        }
    }

    if(sum != 0){
        minus
        return;
    }

    stack<int> st;

    vii ans(n,2);

    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            st.push(i);
        }
        else{
            if(st.empty()){
                flag = false;
                continue;
            }

            ans[st.top()] = 1;
            ans[i] = 1;
            st.pop();
        }
    }

    if(flag == false){
        while(!st.empty()){
            st.pop();
        }
        ans.assign(n, 2);
        for(int i = 0; i < n; i++){
            if(s[i] == ')'){
                st.push(i);
            }
            else{
                if(st.empty()){
                    flag = false;
                    continue;
                }

                ans[i] = 1;
                ans[st.top()] = 1;
                st.pop();
            }
        }
    }

    int mx = imin;
    for(int i = 0; i < n; i++){
        mx = max(mx,ans[i]);
    }
    cout << mx << el;
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
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