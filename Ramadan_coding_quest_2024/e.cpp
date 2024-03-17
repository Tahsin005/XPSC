#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] > 0) pos++;
        else if(a[i] < 0) neg++;
        else zero++;
    }
    double ans1 = (double)pos / (double)n;
    double ans2 = (double)neg / (double)n;
    double ans3 = (double)zero / (double)n;
    cout << fixed << setprecision(6) << ans1 << endl;
    cout << fixed << setprecision(6) << ans2 << endl;
    cout << fixed << setprecision(6) << ans3 << endl;
    return 0;
}