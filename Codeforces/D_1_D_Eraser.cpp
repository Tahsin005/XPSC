#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int length = 0;
        int option = 0;
        bool flag = false;
        for(int i = 0; i < n; i++){
            if(s[i] == 'B'){
                if(flag == false){
                    flag = true;
                    option++;
                }
                if(length >= k){
                    length = 0;
                    option++;
                }
                length++;
            }
            else if(flag == true){
                length++;
            }
        }
        cout<<option<<endl;
    }
    return 0;
}