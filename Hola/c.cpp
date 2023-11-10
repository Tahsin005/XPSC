#include <bits/stdc++.h>

using namespace std;


int main() {
    
    int n; cin >> n;
    vector<int> v(n);
    vector<int> ans;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    vector<pair<int, int>> p;
    for (auto i : mp)
    {
        p.push_back({i.second, i.first});
    }
    sort(p.begin(), p.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         {
        if(a.first==b.first)
        return a.second < b.second;
        return a.first > b.first; });
    for (int i = 0; i < p.size(); i++)
    {
        int n = p[i].first;
        int value = p[i].second;
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
    for(int val : finalans){
        cout<<val<<" ";
    }
    return 0;
}