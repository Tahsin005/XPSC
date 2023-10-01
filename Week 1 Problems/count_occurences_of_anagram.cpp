#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    string s,p;
    cin>>s>>p;

    int n = s.length();
    int k = p.length();
    int i = 0, j = 0;

    int ans = 0;
    map<char,int> mp,cpy;
    for(int l = 0; l < k; l++){
        char ch = p[l];
        mp[ch]++;
    }

    cpy = mp;
    int cnt = mp.size();
    while(j < n){
        if(mp.find(s[j]) != mp.end()){
            mp[s[j]]--;
            if(mp[s[j]] == 0){
                cnt--;
            }
        }
        if(j - i + 1 < k){
            j++;
        }
        else if(j - i + 1 == k){
            if(cnt == 0){
                // mp = cpy;
                ans++;
            }
            if(mp.find(s[i]) != mp.end()){
                mp[s[i]]++;
                if(mp[s[i]] == 1){
                    cnt++;
                }
            }
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
    return 0;
}