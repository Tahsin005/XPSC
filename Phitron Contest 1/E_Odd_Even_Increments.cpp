#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        bool e1 = false, e2 = false, o1 = false, o2 = false;
        for(int i = 0; i < n; i++){
            int x;
            cin>>x;
            a[i] = x;
            if(i % 2 == 0){
                if(a[i] % 2 == 0){
                    e1 = true;
                }
                else{
                    o1 = true;
                }
            }
            else{
                if(a[i] % 2 == 0){
                    e2 = true;
                }
                else{
                    o2 = true;
                }
            }
        }
        if((e1 and o1) or (e2 and o2)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}