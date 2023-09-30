#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int n;
    cin>>n;
    string s = to_string(n);
    if(s.length() == 4){
        cout<<n<<endl;
    }
    else{
        int l = s.length();
        string ans;
        for(int i = 1; i <= 4 - l; i++){
            ans.push_back('0');
        }
        for(char ch: s){
            ans.push_back(ch);
        }
        // int num = stoi(ans);
        // cout<<num<<endl;
        cout<<ans<<endl;
    }
    return 0;
}