#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i += 2) {
        cnt++;
    }
    int lenght_of_tree = cnt + 5;
    for (int i = 1; i <= lenght_of_tree; i++) {
        for (int j = 1; j <= lenght_of_tree - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << " ";
        }
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}