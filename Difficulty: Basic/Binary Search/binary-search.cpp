//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int solve( vector<int> arr , int low , int high , int k )
    {
        //base case 
        if( low > high )
        {
            return -1 ;
        }
        int mid = low + ( high - low ) / 2 ;
        if( arr[mid] == k )
        {
            return mid ;
        }
        
        if( arr[mid] > k )
        {
            return solve( arr , low , mid - 1 , k );
        }
        else 
        {
            return solve( arr, mid + 1 , high , k );
        }
    }
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int ans = solve( arr , 0 , arr.size() - 1 , k );
        
        return ans ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int res = ob.binarysearch(arr, k);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends