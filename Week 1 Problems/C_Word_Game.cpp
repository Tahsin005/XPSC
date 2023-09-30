#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string,int> mp;
        string arr[3][n];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){
                string s;
                cin>>s;
                arr[i][j] = s;
                mp[s]++;
            }
        }
        
        vector<int> playerPoints(3,0);
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){
                // cout<<arr[i][j]<<" ";
                if(mp[arr[i][j]] == 1){
                    playerPoints[i] += 3;
                }
                else if(mp[arr[i][j]] == 2){
                    playerPoints[i] += 1;
                }
            }
            // cout<<endl;
        }
        cout<<playerPoints[0]<<" "<<playerPoints[1]<<" "<<playerPoints[2]<<endl;
    }
    return 0;
}