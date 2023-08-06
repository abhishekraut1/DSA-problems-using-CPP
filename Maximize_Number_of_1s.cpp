//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        int s=0,e=0;
        int zeroCount=0;
        int mx=0;
        for(int e=0;e<n;e++){
            if(arr[e]==0)
                zeroCount++;
            
            if(zeroCount>m){
                if(arr[s]==0)
                    zeroCount--;
                
                s++;
            }
            mx = max(mx,e-s+1);
        }
        
        return mx;
    }  
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends