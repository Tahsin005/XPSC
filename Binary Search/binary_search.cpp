#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9};
    int sz = sizeof(a) / sizeof(a[0]);
    cout<<sz<<endl;
    int l = 0;
    int r = sz - 1;
    int elem = 4;
    bool flag = false;
    int mid = 0;
    while(l <= r){
        mid = l + (r - l) / 2;
        // mid = (l + r) / 2;
        if(a[mid] == elem){
            flag = true;
            break;
        }
        else if(elem < a[mid]){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    if(flag == true) cout<<mid<<endl;
    else cout<<"-1"<<endl;
    return 0;    
}