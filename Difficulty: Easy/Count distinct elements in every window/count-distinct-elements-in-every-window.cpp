//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        vector<int> ans;
        int e = k ;
        for( int i = 0 ; i < arr.size(); i++ )
        {
            unordered_map < int , int > mp ;
            int curr = i ;
            while(curr < e and e <= arr.size() )
            {
                mp[arr[curr]]++;
                curr++;
            }
            e++;
            ans.push_back( mp.size() );
            if( i >= arr.size() - k )
            {
                break ;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        vector<int> res = obj.countDistinct(arr, k);
        for (auto it : res)
            cout << it << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends