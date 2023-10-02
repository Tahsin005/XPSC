#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*
anagram
grams 

Output = False

triangle
integral

Output = True
*/
int main(){
    Tahsin
    string a,b;
    cin>>a>>b;
    if(a.length() == b.length()){
        map<char,int> mp;
        for(int i = 0; i < b.length(); i++){
            mp[b[i]]++;
        }
        bool flag = true;
        for(int i = 0; i < a.length(); i++){
            if(mp[a[i]] > 0){
                mp[a[i]]--;
            }
            else if(mp[a[i]] == 0){
                flag = false;
                break;
            }
        }
        cout<<(flag? "True": "False")<<endl;

        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        // if(a == b) cout<<"True";
        // else cout<<"False"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}