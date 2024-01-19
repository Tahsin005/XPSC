#include<bits/stdc++.h>
#define ll long long
#define pi 3.14159
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    float r;
    r = a / b;
    cout << floor(r) << endl;
    cout << ceil(r) << endl;
    cout << round(r) << endl;
    return 0;
}