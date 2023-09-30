#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int n;
    cin>>n;

    vector<int> watched(n + 1,0);

    for(int i = 0; i < n - 1; i++){
        int x;
        cin>>x;
        watched[x] = 9;
    }

    for(int i = 1; i <= n; i++){
        if(watched[i] == 0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}