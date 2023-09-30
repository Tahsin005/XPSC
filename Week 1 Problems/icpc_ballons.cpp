#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t,n,sum = 0;
    cin>>t;
    while(t--){
        cin>>n;
        // char s[100];
        string s;
        cin>>s;
        int cnt[26] = {0};
        for(int i = 0; i < s.size(); i++){
            int val = s[i] - 65;
            cnt[val]++;
        }
        for(int i = 0; i < 26; i++){
            if(cnt[i] > 0){
                if(cnt[i] > 1){
                    sum += (2 + (cnt[i] - 1));
                }
                if(cnt[i] == 1){
                    sum += 2;
                }
            }
        }
        cout<<sum<<endl;
        sum = 0;
    }
    return 0;
}