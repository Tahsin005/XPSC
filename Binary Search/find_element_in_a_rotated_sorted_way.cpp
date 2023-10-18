#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;

int minidx(vector<int>& a){
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

bool binarysearch(int l,int r,vector<int>& a,int val){
    int mid = -1;

    while(l <= r){
        mid = l + (r - l) / 2;
        if(a[mid] == val){
            return true;
        }
        else if(a[mid] > val){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return false;

}
int main(){
    vector<int> a = {4,5,6,7,8,9,0,1,2};
    int mindx = minidx(a);

    int szofa = a.size();

    bool f = binarysearch(0,mindx - 1, a, 8);
    bool s = binarysearch(mindx,a.size() - 1,a,5);
    if(f or s) yes
    else no
    cout<<mindx<<endl;
    return 0;    
}