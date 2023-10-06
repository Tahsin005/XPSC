#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int n;
    cin>>n;
    int cnt = 0,sum = 0;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            cout<<i<<" "<<n / i<<endl;
            cnt++;
            sum += i;
            if((n / i) != i){
                sum += (n/ i);
                cnt++;
            }
        }
    }
    cout<<"Count and sum of divisor : "<<endl;
    cout<<cnt<<" "<<sum<<endl;
    return 0;
}