// /******************************************************************/
//  *                                                                 *
//  *   |''||''|     |     ||     ||'   ;''''';.   '||'  '|.   '|'    *
//  *      ||       |||    ||     ||   ||           ||    |'|   |     *
//  *      ||      |  ||   |||||||||     \___       ||    | '|. |     *
//  *      ||     .''''|.  ||     ||          \     ||    |   |||     *
//  *      ||    .|.  .||. ||     ||.  ".......'   .||.  .|.   '|     *
//  *                                                                 *
// /******************************************************************/

#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
int n;
char a[10005][1005];
char cpy[10005][1005];
void printMatrix(char a[1005][1005],int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<a[i][j]<<" ";
        }
        nl;
    }
}
void solve(){
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cpy[i][j] = a[i][j];
        }
    }
    for(int i=0; i<n; i++){
     for(int j=i+1; j<n; j++)
         swap(a[i][j], a[j][i]);
    }

   //Reversing each row of the matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n/2; j++){
            swap(a[i][j], a[i][n-j-1]);
        }
    }
//    printMatrix(a,n);
    printMatrix(a,n);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(cpy[i][j] != a[i][j]){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}