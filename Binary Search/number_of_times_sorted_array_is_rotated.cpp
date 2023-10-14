#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;

int numberOfRotation(vector<int>& a) {
    int l = 0;
    int n = a.size();
    int r = n - 1;
    int mid = 0, prev = 0, next = 0;
    while(l <= r){
        if(a[l] <= a[r]){
            return l;
        }
        mid = l + (r - l) / 2;
        prev = (mid - 1 + n) % n;
        next = (mid + 1) % n;
        
        if(a[mid] <= a[next] and a[mid] <= a[prev]){
            return mid;
        }
        if(a[l] <= a[mid]){
            l = mid + 1;
        }
        if(a[mid] <= a[r]){
            r = mid - 1;
        }
    }
    return -1 ; 
}
int main(){
    vector<int> a = {4,5,6,7,0,1,2};
    int cnt = numberOfRotation(a);
    cout<<a.size() - cnt<<endl;
    return 0;    
}