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
#define nl cout<<'\n';
#define el '\n'
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
bool isPalindrome(int number){
    string numStr = to_string(number);
    string reversedStr = numStr;
    reverse(reversedStr.begin(), reversedStr.end());
    return numStr == reversedStr;
}

vii palindromes;
void generatePalindromes(){
    int mx = 1<<15;
    for(int i = 0; i < mx; i++){
        if(isPalindrome(i)){
            palindromes.push_back(i);
        }
    }
}
void solve(){
    int n;
    cin>>n;
    vii a(n);
    unordered_map<int,int> freq;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        freq[a[i]]++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < palindromes.size(); j++){
            if((a[i] ^ palindromes[j]) <= a[i]){
                continue;
            }
            if(freq.find(a[i] ^ palindromes[j]) != freq.end()){
                ans = ans + freq[a[i] ^ palindromes[j]];
            }
        }
    }
    for(auto val: freq){
        ans += ((ll)val.second * (val.second + 1)) / 2;
    }
    cout<<ans<<el;
}
int main(){
    Tahsin
    generatePalindromes();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}