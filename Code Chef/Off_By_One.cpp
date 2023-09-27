#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int a,b;
    cin>>a>>b;
    int sum = a + b;
    string s;
    s = to_string(sum);
    s.push_back('1');
    cout<<s;
    return 0;
}