//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int s = 0 , e = 0 ;
        
        int sum = 0 ;
        
        for( int i = 0 ; i < arr.size(); i++ )
        {
            sum = sum + arr[i];
            if( sum > target )
            {
                e = i ;
                while( sum > target )
                {
                    sum = sum - arr[s++];
                }
            }
            
            if( sum == target )
            {
                e = i ;
                return{s+1 , e+1 };
            }
        }
        
        return{-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends