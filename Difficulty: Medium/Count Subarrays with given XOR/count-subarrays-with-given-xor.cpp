//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map < int , int > mp;
        long sum = 0 ;
        long count = 0 ;
        
        mp[0]++;
        
        
        for( int i = 0 ; i < arr.size(); i++ )
        {
            sum = sum ^ arr[i];
            if( mp.find(sum ^ k ) != mp.end() )
            {
                count += mp[sum ^ k];
            }
            mp[sum]++;
        }
        
        return count ;
        
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(); // Ignore the newline after the number of test cases

    while (tc-- > 0) {
        string input;
        getline(cin, input); // Read the whole line for the array

        stringstream ss(input);
        vector<int> arr;
        int num;

        while (ss >> num) {
            arr.push_back(num); // Push numbers into the vector
        }

        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline after k

        Solution obj;
        cout << obj.subarrayXor(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends