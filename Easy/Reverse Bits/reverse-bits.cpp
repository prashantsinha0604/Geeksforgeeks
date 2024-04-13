//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        string binary = "";
        long long ans = 0 ;
        
        for(int i = 0 ; i < 32 ; i++ )
        {
            ans = (x >> i ) &  1 ;
            if ( ans == 1 )
            {
                binary = binary + '1';
            }
            else
            {
                binary = binary + '0';
            }
        }
        ans = 0 ;
        for(int i = 0 ; i < binary.size() ; i++ )
        {
            ans = ans * 2 + (binary[i] - '0');
        }
        return ans ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends