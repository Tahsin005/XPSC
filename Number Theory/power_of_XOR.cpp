#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int a = 4, b = 7;

    a = a ^ b;

    b = a ^ b;
    // b = (a ^ b) ^ b ==> a ^ (b ^ b) ==> a ^ 0 ==> a
    a = a ^ b;
    // a = a ^ b ^ a ==> 0 ^ b ==> b

    cout<<a<<" "<<b<<endl;
    return 0;
}