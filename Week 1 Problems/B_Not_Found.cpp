#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    string s;
    cin>>s;

    int cnt[26];
    memset(cnt,0,sizeof(cnt));

    for(int i = 0; i < s.length(); i++){
        int val = s[i] - 'a';
        cnt[val]++;
    }
    bool flag = true;
    for(int i = 0; i < 26; i++){
        if(cnt[i] == 0){
            char ch = i + 97;
            cout<<ch<<endl;
            flag = false;
            break;
        }
    }
    if(flag == true) cout<<"None"<<endl;
    return 0;
}