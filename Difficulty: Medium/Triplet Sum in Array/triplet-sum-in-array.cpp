//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Should return true if there exists a triplet in the
    // array arr[] which sums to x. Otherwise false
    bool find3Numbers(int arr[], int n, int x) {
        // Your Code Here
        int cnt = 0 ;
        sort( arr , arr + n );
        
        for( int i = 0 ; i < n - 2 ; i++ )
        {
            if( i > 0  and arr[i] == arr[i-1] )
            {
                continue ;
            }
            
            int j = i + 1 , k = n -1 ;
            
            while( j < k )
            {
                if( arr[i] + arr[j] + arr[k] == x )
                {
                    cnt++ ;
                    
                    while( j < k and arr[j] == arr[j+1] )
                    {
                        j++;
                    }
                    
                    while( j < k and arr[k] == arr[k-1] )
                    {
                        k--;
                    }
                    
                    
                    j++;
                    k--;
                    
                }
                else if( arr[i] + arr[j] + arr[k] > x )
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        
        if( cnt )
        {
            return true;
        }
        else
        {
            return false ;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, X;
        cin >> n >> X;
        int i, A[n];
        for (i = 0; i < n; i++)
            cin >> A[i];
        Solution ob;
        cout << ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends