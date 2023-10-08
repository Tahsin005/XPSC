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
//Link - https://codeforces.com/contest/1877/problem/B
void solve(){
    int n,cost;
    cin>>n>>cost;
    vector<int> a(n);
    vector<int> b(n);

    for(auto& val: a){
        cin>>val;
    }
    for(auto& val: b){
        cin>>val;
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    for(int i = 0; i < n; i++){
        pq.push({b[i],a[i]});
    }
    int sum = 0;
    int total_people;
    if(pq.top().first > cost){
        int cnt = 0;
        int x = pq.top().second;
        while(x != 0 or cnt == n){
            sum += cost;
            cnt++;
            x--;
        }
        total_people = n - cnt;
    }
    sum += cost;
    total_people = n - 1;
    while(total_people != 0){
        int bi = pq.top().first;
        int ai = pq.top().second;
        pq.pop();
        while(ai != 0){
            sum += bi;
            ai--;
            total_people--;
            if(total_people == 0){
                break;
            }
        }
    }
    cout<<sum<<endl;
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