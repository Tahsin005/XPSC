#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<'\n';
#define el '\n'
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define pii pair<int,int>
#define out(x) cout<<x<<"\n";
#define out2(x,y) cout<<x<<" "<<y<<"\n";
#define messi cout<<"Que Miras Bobo!"<<'\n';
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
// 5
// 1 45 47 50 5
int binaryAscending(vii& v,int l,int r,int key){
    int mid;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(v[mid] == key){
            return mid;
        }
        else if(v[mid] < key){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return -1;
}
int binaryDesceding(vii& v,int l,int r,int key){
    int mid;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(v[mid] == key){
            return mid;
        }
        else if(v[mid] < key){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
}
int findBitonicPoint(vii &arr, int n, int l, int r){
    int mid;
    int bitonicPoint = 0;
    mid = (r + l) / 2;
    if(arr[mid] > arr[mid - 1] and arr[mid] > arr[mid + 1]){
        return mid;
    }
    else if(arr[mid] > arr[mid - 1] and arr[mid] < arr[mid + 1]){
        bitonicPoint = findBitonicPoint(arr, n, mid, r);
    }
    else if(arr[mid] < arr[mid - 1] and arr[mid] > arr[mid + 1]){
        bitonicPoint = findBitonicPoint(arr, n, l, mid);
    }
    return bitonicPoint;
}
int main(){
    int n;
    cin>>n;
    vii v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    int key = 51;
    int x = findBitonicPoint(v,v.size(),0,v.size() - 1);
    cout<<x<<el;

    int bs1 = binaryAscending(v,0,x,key);
    int bs2 = binaryDesceding(v,x + 1, n - 1,key);

    if(bs1 == -1 and bs2 == -1) cout<<"Not Found"<<el;
    else{
        if(bs1 != -1) cout<<bs1<<el;
        else cout<<bs2<<el;
    }

    return 0;
}