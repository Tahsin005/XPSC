#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
int main(){
    string s,ans;
    cin>>s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '.'){
            ans.push_back('0');
        }
        else{
            if(s[i + 1] == '.'){
                ans.push_back('1');
            }
            else if(s[i + 1] == '-'){
                ans.push_back('2');
            }
            i++;
        }
    }
    cout<<ans<<endl;
    return 0;    
}