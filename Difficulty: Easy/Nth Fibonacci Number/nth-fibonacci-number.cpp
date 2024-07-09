//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int mod = 1000000007;
    int solve( vector<int> & dp , int n )
    {
        //base case 
        if( n <= 1 )
        {
            return n ;
        }
        
        
        
        if( dp[n] != -1 )
        {
            return dp[n];
        }
        
        dp[n] = (solve( dp , n - 1 ) % mod + solve( dp , n -2 ) % mod) % mod ;
        
        return dp[n];
    }
    int nthFibonacci(int n){
        // code here
        vector<int> dp(n + 1 , -1 );
        dp[0] = 0 ;
        dp[1] = 1 ;
        dp[2] = 1 ;
        
        return solve( dp , n );
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends