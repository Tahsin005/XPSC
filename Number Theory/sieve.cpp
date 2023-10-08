#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N = 1e7 + 10;
vector<bool> isPrime(N, 1);
int main(){
    Tahsin
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i < N; i++){
        if(isPrime[i] == true){
            for(int j = 2 * i; j < N; j += i){
                isPrime[j] = false;
            }
        }
    }

    // for(int i = 1; i < 100; i++){
    //     cout<<isPrime[i]<<endl;
    // }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        if(isPrime[x] == true) cout<<"Prime\n";
        else cout<<"Not Prime\n";
    }
    return 0;
}