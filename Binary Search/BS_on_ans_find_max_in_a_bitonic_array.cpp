#include <bits/stdc++.h>

using namespace std;
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
        int l = 0,r = n - 1;

        int mid;
        
        while(l <= r){
            mid = l + (r - l ) / 2;
            if(mid != 0 and mid != (n - 1)){
                if(arr[mid] > arr[mid - 1] and arr[mid] > arr[mid + 1]){
                    return arr[mid];
                }
                else if(arr[mid + 1] > arr[mid]){
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
            else if(mid == 0){
	            if(arr[0] > arr[1]){
	                return arr[0];
	            }
	            else{
	                return arr[1];
	            }
	        }
	        else if(mid == n-1){
	            if(arr[n-1] > arr[n-2]){
	                return arr[n-1];
	            }
	            else{
	                return arr[n-2];
	            }
	        }
        }
        return 0;
	}
};


int main() {
    int t;
    cin >> t;
    while(t--){
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}