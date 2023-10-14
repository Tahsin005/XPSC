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
int a[2][2];
void printMatrix(){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout<<a[i][j]<<" ";
        }
        nl
    }
}
void rotate90degreeClockwise(){
    for(int i = 0; i < 2; i++){
        for(int j = i; i < 2; i++){
            swap(a[i][j],a[j][i]);
        }
    }

    for(int i = 0; i < 2; i++){
        int l = 0,r = 2 - 1;
        while(l < r){
            swap(a[i][l],a[i][r]);
            l++;
            r--;
        }
    }
}
bool isBeautiful(){
    if((a[0][0] < a[0][1] and a[0][0] < a[1][0]) and (a[1][0] < a[1][1] and a[1][0] > a[0][0]) and (a[0][1] > a[0][0] and a[0][1] < a[1][1]) and (a[1][1] > a[1][0] and a[1][1] > a[0][1])){
        return true;
    }
    return false;
}
void solve(){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin>>a[i][j];
        }
    }
    // printMatrix();
    // rotate90degreeClockwise();
    // rotate90degreeClockwise();
    // rotate90degreeClockwise();
    // rotate90degreeClockwise();
    // printMatrix();
    int q = 4;
    bool flag = false;
    while(q--){
        bool check = isBeautiful();
        if(check == true){
            flag = true;
            break;
        }

        rotate90degreeClockwise();
    }
    if(flag == true) yes
    else no
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