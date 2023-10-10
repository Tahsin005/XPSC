#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void printBinary(int n){
    for(int i = 10; i >= 0; i--){
        cout<<((n>>i) & 1);
    } cout<<endl;
}
int main(){
    Tahsin
    //Odd even check
    // If the 0th bit of a number is 0 then its an even number
    // Else if(0th bit of number == 1) its an odd number
    // for(int i = 0; i < 8; i++){
    //     printBinary(i);
    //     if(i & 1){
    //         cout<<"Odd"<<endl;
    //     }
    //     else{
    //         cout<<"Even"<<endl;
    //     }
    // }


    //Multiply and divide by 2
    // int n = 5;
    // // printBinary(5);

    // cout<<(n>>1)<<endl;// it will divide n by 2
    // cout<<(n<<1)<<endl;// it will divide n by 2


    // Uppser case alphabet to lower case alphabet

    // for(char c = 'A'; c <= 'E'; c++){
    //     cout<<c<<endl;
    //     printBinary(int(c));
    // }
    // for(char c = 'a'; c <= 'e'; c++){
    //     cout<<c<<endl;
    //     printBinary(int(c));
    // }

    // char A = 'A';
    // char smalla = A | (1<<5);
    // cout<<smalla<<endl;
    // char capA = smalla & (~(1<<5));
    // cout<<capA<<endl;
    // // Another cool way to change case of letter
    // cout<<char(1<<5)<<endl;
    // //Uppercase to lowercase: have to do bitwise or with space(' ')
    // cout<<char('A' | ' ')<<endl;
    // //Lowercase to uppercase: have to do bitwise and with underscore('_')
    // printBinary(int('_'));
    // cout<<char('a' & '_')<<endl;


    //Unset 0 to ith bit(LSB)
    printBinary(59);
    int a = 59;
    int i = 4;
    int b = a & (~((1<<(i + 1)) - 1));
    printBinary(b);

    //Unset MSB 
    i = 3;
    int c = (a & ((1 << (i + 1)) - 1));
    printBinary(c);

    // Check if a number is power of two or not
    int n = 30;
    if(n & (n - 1)){
        cout<<"Not power of 2"<<endl;
    }
    else{
        cout<<"Power of 2"<<endl;
    }
    return 0;
}