#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
int main(){
    // int a[] = {1,2,3,4,5,6,7,8,9};
    int a[] = {9,8,7,6,5,4,3,2,1};
    int sz = sizeof(a) / sizeof(a[0]);
    int l = 0, r = sz - 1;
    int elem = 4;
    bool flag = false;
    int mid = 0;

    if(sz == 1){
        if(a[0] == elem) cout<<0<<endl;
        else cout<<"-1"<<endl;
    }
    else if(sz == 2){
        if(a[0] == elem) cout<<0<<endl;
        else if(a[1] == elem) cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    else{
        int f = a[0];
        int s = a[1];
        if(f > s){
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
        }
        else if(s > f){
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
        }
    }
    return 0;    
}