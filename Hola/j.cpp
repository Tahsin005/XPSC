#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    string s;
    cin >> s;
    n = s.length();
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    vector<pair<int, int>> p;
    for (auto i : mp)
    {
        p.push_back({i.second, i.first});
    }
    vector<char> ans;
    sort(p.begin(), p.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         {
        if(a.first==b.first)
        return a.second < b.second;
        return a.first > b.first; });
    for (int i = 0; i < p.size(); i++)
    {
        int n = p[i].first;
        char value = p[i].second;
        for (int j = 0; j < n; j++)
        {
            ans.push_back(value);
        }
    }
    vector<int> finalans;
    for(int val : ans){
        if(!finalans.empty()){
            if(finalans.back() != val){
                finalans.push_back(val);
            }
        }
        else{
            finalans.push_back(val);
        }
    }
    char ch = (char)finalans[0];
    // cout<< ch << endl;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == ch) cnt++;
    }
    cout << ch << " " << cnt << endl;
    return 0;
}