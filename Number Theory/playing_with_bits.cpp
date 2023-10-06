#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void printBinary(int n){
    for(int i = 10; i >= 0; --i){
        cout<<((n>>i) & 1);
    } cout<<endl;
}
int main(){
    Tahsin
    /*
    Set bit = 1;
    Not set bit = 0;
    */
    printBinary(9);
    int a = 9;
    int i = 3;
    /*If we want to find if a bit of a number is set or not
    we have to do bitwise and operation of this number with a 
    number that has Only the required bit is set bit
    
    We can find such number using (1 << i);
        i = the positon of the number that you want to find if set
        or not. (0 based index)
    */
    if((a & (1<<i)) != 0){
        cout<<"Set Bit"<<endl;
    }
    else{
        cout<<"Not Set Bit"<<endl;
    }


    // Bit set

    /*To set a bit we need to do bitwise or operation of that number with a
    number thats every digit is unset except i-th dight*/
    printBinary(a | (1<<1));

    //Bit unset

    /*To unset a bit we need to do bitwise and operation with a number 
    that has its all bit is set except i-th digit*/
    printBinary(a & (~(1<<3)));

    //Bit toggle: to change bit to 1 if its 0 and 0 if its 1;

    /*To toggle bit we need to use bitwise xor operator and use the same 
    method as bit set*/
    printBinary(a ^ (1<<2));
    printBinary(a ^ (1<<3));

    //Bit count 
    int cnt = 0;
    for(int k = 31; k >= 0; --k){
        if((a & (1<<k)) != 0){
            cnt++;
        }
    }
    cout<<cnt<<endl;

    cout<<__builtin_popcount(a)<<endl;// Only works in integer
    cout<<__builtin_popcountll((1LL<<35) - 1)<<endl;
    return 0;
}