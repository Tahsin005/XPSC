#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int n,cnt = 0;
    cin>>n;
    string s;
    string check = "ABC";
    cin>>s;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A'){
            string ans = "A";
            for(int j = i + 1; j < i + 3; j++){
                ans.push_back(s[j]);
            }
            if(ans == check){
                cnt++;
            }
            ans.clear();
        }
    }
    cout<<cnt<<endl;
    return 0;
}