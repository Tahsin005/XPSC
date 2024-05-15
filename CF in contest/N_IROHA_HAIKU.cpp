#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int arr[3];
    for (int i = 0; i < 3; i++) cin >> arr[i];
    sort(arr,arr + 3);
    if (arr[0] == 5 and arr[1] == 5 and arr[2] == 7) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    
    return 0;
}