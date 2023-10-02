#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        unordered_multimap<string,int> mp;
        mp.clear();
        for(int i = 0; i < a; i++){
            int x;
            string s;
            cin>>x>>s;
            if(s != "00"){
                mp.insert({s,x});
            }
        }
        priority_queue<int,vector<int>,greater<int>> s01;
        priority_queue<int,vector<int>,greater<int>> s10;
        priority_queue<int,vector<int>,greater<int>> s11;
        
        for(auto val: mp){
            if(val.first == "01"){
                s01.push(val.second);
            }
            else if(val.first == "10"){
                s10.push(val.second);
            }
            else if(val.first == "11"){
                s11.push(val.second);
            }
        }
        int mn = INT_MAX;
        if(s01.empty() == true and s10.empty() == true){
            if(s11.empty() == false){
                cout<<s11.top()<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
        else if(s01.empty() == false and s10.empty() == false){
            mn = min(mn, (s01.top() + s10.top()));
            if(s11.empty() == false){
                mn = min(mn,s11.top());
                cout<<mn<<endl;
            }
            else{
                cout<<mn<<endl;
            }
        }
        else if(s01.empty() == true or s10.empty() == true){
            if(s11.empty() == false){
                cout<<s11.top()<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}