#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int_fast32_t main(){
    Tahsin
    cout<<INT_MAX<<endl;
    // int a = (1LL<<32) - 1;
    int a = (1LL<<31) - 1; // (1 << n) is eqv to 2^n
    /*
    Integer reserves One bit out of 32 bit to store the sign bit
    Thats why we cannot store 2^32 - 1;
    */
    cout<<a<<endl;

    unsigned int b = (1LL<<32) - 1;
    /*
    Unisignes int Works only with positive integers, 
    So, it doesn't need one extra sign bit to represent 
    the number. Hence, it can store 2^32 - 1;
    */
    cout<<b<<endl;
    return 0;
}