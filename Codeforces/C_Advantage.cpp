#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> temp;
        for(int i = 0; i < a.size(); i++){
            cin>>a[i];
        }
        temp = a;
        sort(temp.begin(),temp.end());
        int max_val = temp[n - 1];
        int second_max = temp[n - 2];
        for(int i = 0; i < n; i++){
            if(a[i] == max_val){
                cout<<a[i] - second_max<<" ";
            }
            else{
                cout<<a[i] - max_val<<" ";
            }
        }cout<<endl;
    }
    return 0;
}