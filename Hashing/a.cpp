#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*
Give an array of strings. You can move any number of characters from one string to any other string
any number of times. You just have to make all the string equal. 
Print "Yes" if you can make every string in the array equal using any number of operations, othrewise print "No"
*/

/*
2
collegeee
coll
collegge
wall
ah
wallahah
*/
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b>>c;
        map<char,int> mp;
        mp.clear();
        for(char ch: a){
            mp[ch]++;
        }
        for(char ch: b){
            mp[ch]++;
        }
        for(char ch: c){
            mp[ch]++;
        }
        bool flag = true;
        for(auto val: mp){
            // cout<<val.first<<" "<<val.second<<endl;
            if(val.second % 3 != 0){
                flag = false;
                break;
            }
        }
        cout<<(flag? "Yes": "No")<<endl;
    }
    return 0;
}