#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int points = n + m;
    while (points) {
        points -= 2;
        n--;
        m--;
        if (n == 0 or m == 0) {
            cout << "Akshat"; break;
        } else if (n < 0 or m < 0) {
            cout << "Malvika"; break;
        }
        points -= 2;
        n--;
        m--;
        if (n == 0 or m == 0) {
            cout << "Malvika"; break;
        } else if (n < 0 or m < 0) {
            cout << "Akshat"; break;
        }
    }
    
    return 0;
}