#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
int main(){
    int a[] = {9,8,7,6,5,4,3,2,1};
    int sz = sizeof(a) / sizeof(a[0]);
    int l = 0, r = sz - 1;
    int elem = 4;
    bool flag = false;
    int mid = 0;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(a[mid] == elem){
            flag = true;
            break;
        }
        else if(a[mid] > elem){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    if(flag == true) cout<<mid<<endl;
    else cout<<"-1"<<endl;
    return 0;    
}