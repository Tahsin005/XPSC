#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
int main(){
    int a = 4, b = 7;

    a = a ^ b;

    b = a ^ b;
    // b = (a ^ b) ^ b ==> a ^ (b ^ b) ==> a ^ 0 ==> a
    a = a ^ b;
    // a = a ^ b ^ a ==> 0 ^ b ==> b
    cout<<"After swapping :";
    cout<<a<<" "<<b<<endl;

    /*
    Given an array of odd integers, all integers are present in odd count except one.
    Find that one integer which has odd count in O(n) time complexity 
    and O(1) space complexity

        N < 10 ^ 5
        a[i] < 10 ^ 5
    */
    int n;
    cin>>n;
    int x = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin>>x;
        ans ^= x;
    }
    cout<<ans<<endl;
    return 0;    
}