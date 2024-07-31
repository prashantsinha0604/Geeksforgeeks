//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int cnt = 0 ;
        string ans = "" , s = arr[0] ;
        
        
        for( int i = 0 ; i < arr[0].size(); i++ )
        {
            cnt= 0 ;
            
            for( int j = 1 ; j < arr.size(); j++ )
            {
                if( s[i] == arr[j][i] )
                {
                    cnt++;
                }
            }
            if( cnt == arr.size() - 1 )
            {
                ans.push_back( s[i] );
                
            }
            else
            {
                break ;
            }
        }
        
        if( ans.size() == 0  )
        {
            return "-1";
        }
        else
        {
            return ans;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends