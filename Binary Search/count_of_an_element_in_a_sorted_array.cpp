#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;


int firstOccurrenc(int a[],int elem,int l,int r,int sz){
    int mid = 0;
    int res = -1;
    bool flag = false;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(a[mid] == elem){
            res = mid;
            r = mid - 1;
            flag = true;
        }
        else if(a[mid] > elem){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    if(flag == true) return res;
    else return -1;
}
int lastOccurrenc(int a[],int elem,int l,int r,int sz){
    int mid = 0;
    int res = -1;
    bool flag = false;
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
    if(flag == true) return res;
    else return -1;
}
int main(){
    int a[] = {2,4,4,5,7,10,10,10,10,10,10,18,20};
    int sz = sizeof(a) / sizeof(a[0]);
    int l = 0, r = sz - 1;
    int elem = 10;
    int first = firstOccurrenc(a,elem,l,r,sz);
    int last = lastOccurrenc(a,elem,l,r,sz);
    if(first == -1 or last == -1){
        cout<<"NO SUCH ELEMENT EXIST"<<endl;
    }
    else{
        int cntOfElement = last - first + 1;
        cout<<"Count of "<<elem<<" is : "<<cntOfElement<<endl;
    }
    return 0;    
}