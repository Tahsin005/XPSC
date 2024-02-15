#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    vector<int> v = {72, 97, 112, 112, 121, 32, 86, 97, 108, 101, 110, 116, 105, 110, 101, 39, 115, 32, 68, 97, 121};
    
    for (int i = 0; i < v.size(); i++) {
        cout << (char)(v[i]);
    }
    return 0;
}