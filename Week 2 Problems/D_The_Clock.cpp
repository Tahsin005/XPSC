// /******************************************************************/
//  *                                                                 *
//  *   |''||''|     |     ||     ||'   ;''''';.   '||'  '|.   '|'    *
//  *      ||       |||    ||     ||   ||           ||    |'|   |     *
//  *      ||      |  ||   |||||||||     \___       ||    | '|. |     *
//  *      ||     .''''|.  ||     ||          \     ||    |   |||     *
//  *      ||    .|.  .||. ||     ||.  ".......'   .||.  .|.   '|     *
//  *                                                                 *
// /******************************************************************/

#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
bool isPalindrome(string s){
    int l = 0,r = 4;
    while(l < r){
        if(s[l] != s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
void solve(){
    string s;
    cin>>s;
    int x;
    cin>>x;

    map<string,bool> mp;
    int h = x / 60;
    int m = x % 60;

    int ans = 0;
    while(mp[s] == false){
        if(isPalindrome(s) == true){
            ans += 1;
        }
        else{
            ans += 0;
        }
        mp[s] = true;

        int hour = ((s[0] - '0') * 10) + (s[1] - '0');
        int minute = ((s[3] - '0') * 10) + (s[4] - '0');

        minute += m;
        if(minute > 59){
            hour++;
        }
        minute %= 60;

        hour += h;
        hour %= 24;

        s[0] = ('0' + (hour / 10));
        s[1] = ('0' + (hour % 10));

        s[3] = ('0' + (minute / 10));
        s[4] = ('0' + (minute % 10));
    }
    cout<<ans<<endl;
}
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}