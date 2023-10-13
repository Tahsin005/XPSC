#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
int main(){
    //First Occurrence
    // int a[] = {2,4,5,7,10,10,10,18,20};
    // int sz = sizeof(a) / sizeof(a[0]);
    // int l = 0, r = sz - 1;
    // int res = -1;
    // bool flag = true;
    // int mid = 0;
    // int elem = 10;

    // while(l <= r){
    //     mid = l + (r - l) / 2;
    //     if(a[mid] == elem){
    //         res = mid;
    //         r = mid - 1;
    //         flag = true;
    //     }
    //     else if(a[mid] > elem){
    //         r = mid - 1;
    //     }
    //     else{
    //         l = mid + 1;
    //     }
    // }
    // if(flag = true) cout<<"First Occurrence index : "<<res<<endl;
    // else cout<<"-1"<<endl;


    //Last Occurrence
    int a[] = {2,4,5,7,10,10,10,18,20};
    int sz = sizeof(a) / sizeof(a[0]);
    int l = 0, r = sz - 1;
    int res = -1;
    bool flag = true;
    int mid = 0;
    int elem = 10;

    while(l <= r){
        mid = l + (r - l) / 2;
        if(a[mid] == elem){
            res = mid;
            l = mid + 1;
            flag = true;
        }
        else if(a[mid] > elem){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    if(flag = true) cout<<"Last Occurrence index : "<<res<<endl;
    else cout<<"-1"<<endl;

    return 0;    
}