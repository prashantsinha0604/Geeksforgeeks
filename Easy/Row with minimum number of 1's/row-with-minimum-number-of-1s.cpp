//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int cnt = 0 , idx = -1 ;
        int mini = INT_MAX;
        for( int i = 0 ; i < a.size(); i++ )
        {
            cnt = 0 ;
            for(int j = 0 ; j < a[0].size(); j++ )
            {
                if(a[i][j] == 1 )
                {
                    cnt++;
                }
            }
            if( cnt < mini )
            {
                mini = cnt ;
                idx = i ;
            }
            
        }
        
        return idx + 1 ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(N, M, A) << "\n";
    }
}
// } Driver Code Ends