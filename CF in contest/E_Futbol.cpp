#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt = 1;
    bool flag = true;
    for(int i = 1; i < s.length(); i++){
        char c = s[i - 1];
        char c1 = s[i];
        if(c1 == c and flag == true){
            cnt++;
        } else if(c1 != c){
            cnt = 1;
        }

        if(cnt == 7){
            break;
        }

    }
    if(cnt == 7) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    
    return 0;
}