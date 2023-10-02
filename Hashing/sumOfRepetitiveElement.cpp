#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*
You area given an integer n, representing the number of elements. Then you will be given
n elements. You have to return the sum of repetitive elements i.e the element that appears more
than one time.
*/
int main(){
    Tahsin
    int n;
    cin>>n;
    map<int,int> mp;
    while(n--){
        int x;
        cin>>x;
        mp[x]++;
    }

    int ans = 0;
    for(auto val: mp){
        if(val.second > 1){
            ans += val.first;
        }
    }
    cout<<ans<<endl;
    return 0;
}