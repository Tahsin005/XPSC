#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    //Prime Check
    int n;
    cin>>n;
    // if(n == 1){
    //     cout<<0<<endl;
    //     return 0;
    // }
    // bool is_prime = true;
    // for(int i = 2; i * i <= n; i++){
    //     if(n % i == 0){
    //         is_prime = false;
    //         break;
    //     }
    // }
    // cout<<is_prime<<endl;


    //Prime Factorization

    vector<int> prime_factor;
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            prime_factor.push_back(i);
            n /= i;
        }
    }
    if(n > 1){
        prime_factor.push_back(n);
    }
    for(int prime: prime_factor) cout<<prime<<" ";

    return 0;
}