#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> &v,int k){
    list<int> l;
    vector<int> ans;
    int i=0,j=0;
    
    while(j < v.size()){
        while(l.size() > 0 and l.back() < v[j]){
            l.pop_back();
        }
        l.push_back(v[j]);
        
        if(j - i + 1 < k){
            j++;   
        }
        else if(j - i + 1 == k){
            ans.push_back(l.front());
            
            if(v[i] == l.front()){
                l.pop_front();
            }
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        vector<int> ans = solve(v,k);
        for(int val: ans){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}