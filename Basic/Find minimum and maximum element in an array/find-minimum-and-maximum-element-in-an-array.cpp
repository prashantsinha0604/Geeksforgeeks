//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    pair<long long, long long> getMinMax(long long arr[], int n) {
        // code here
         long long maxi = arr[0];
        for( int i = 1 ; i < n ; i++ )
        {
            if( arr[i] > maxi )
            {
                maxi = arr[i] ;
            }
        }
        long long mini = INT_MAX;
        for( int i = 0 ; i < n ; i++ )
        {
            if( arr[i] < mini )
            {
                mini = arr[i];
            }
        }
        return {mini , maxi };
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(a, n);
        
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends