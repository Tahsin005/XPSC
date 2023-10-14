#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
vector<int> solve(vector<int> &v,int k){

    /*
        MY APPROACH
    */
    int i = 0, j = 0;
    vector<int> ans;
    priority_queue<int> pq;
    while(j < v.size()){
        pq.push(v[j]);
        if(j - i + 1 < k){
            j++;
        }
        else if(j - i + 1 == k){
            if(pq.empty() == false){
                ans.push_back(pq.top());
            }
            if(v[i] == pq.top()){
                pq.pop();
            }
            i++;
            j++;
        }

    }
    return ans;
    // list<int> l;
    // vector<int> ans;
    // int i=0,j=0;
    
    // while(j < v.size()){
    //     while(l.size() > 0 and l.back() < v[j]){
    //         l.pop_back();
    //     }
    //     l.push_back(v[j]);
        
    //     if(j - i + 1 < k){
    //         j++;   
    //     }
    //     else if(j - i + 1 == k){
    //         ans.push_back(l.front());
            
    //         if(v[i] == l.front()){
    //             l.pop_front();
    //         }
    //         i++;
    //         j++;
    //     }
    // }
    // return ans;
}
int main(){
    Tahsin
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    vector<int> ans = solve(v,k);
    for(int val: ans){
        cout<<val<<" ";
    }
    return 0;
}