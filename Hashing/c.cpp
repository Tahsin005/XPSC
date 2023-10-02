#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*
Check whether two string are isomorphic of each other. Return true if they
are else return false;

Two strings are isomorphic of each other if there is one to one mapping possible
for every charcter of the string to every character of second string and 
all occurences of every character in first string maps to the same character
in the second string.
*/
bool checkIsomorphic(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    unordered_map<char,char> mp;
    //Checking one-to-many mapping from s1 -> s2
    for(int i = 0; i < s1.length(); i++){
        if(mp.find(s1[i]) != mp.end()){
            if(mp[s1[i]] != s2[i]){
                return false;
            }
        }
        else{
            mp[s1[i]] = s2[i];
        }
    }

    //Checking one-to-many mapping from s2 -> s1

    mp.clear();

    for(int i = 0; i < s2.length(); i++){
        if(mp.find(s2[i]) != mp.end()){
            if(mp[s2[i]] != s1[i]){
                return false;
            }
            else{
                mp[s2[i]] = s1[i];
            }
        }
    }
    return true;
}
int main(){
    Tahsin
    string s1,s2;
    cin>>s1>>s2;
    cout<<(checkIsomorphic(s1,s2)? "YES": "NO")<<endl;
    return 0;
}