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
//@ Problem Link: https://lightoj.com/problem/discovering-permutations
bool permutation(string& s){
    int n = s.length();
    int i = n - 2; 

    while(i >= 0 and s[i] >= s[i + 1]){
        i--;
    }

    if(i == -1){
        return false;
    }

    int j = n - 1;

    while(s[j] <= s[i]){
        j--;
    }

    // cout << "Before Swapping: " << s << el;
    swap(s[i],s[j]);
    // cout << "After swapping : " << s << el;

    reverse(s.begin() + i + 1, s.end());
    // cout << "After Revesing : " << s << el;

    return true;
}
void generate(int n, int k){
    string s = "";
    for(int i = 0; i < n; i++){
        s += (char)('A' + i);
    }

    int cnt = 0;
    do{
        cout << s << el;
        cnt++;
    }while(permutation(s) and cnt < k);
}
void solve(){
    int n,k;
    cin >> n >> k;

    generate(n,k);
    
}
e4{
    Tahsin
    ll t = 1;
    cin >> t;
    for(ll cs = 1; cs <= t; cs++){
        cout << "Case " << cs << ": " << el;
        solve();
    }
    return 0;    
}