#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int sum_of_money = 0;
    int div = n / m;
    int rem = n % m;
    sum_of_money = min(div * b, a * (div * m));
    sum_of_money += min(b, a * rem);
    cout << sum_of_money << '\n';
    return 0;
}