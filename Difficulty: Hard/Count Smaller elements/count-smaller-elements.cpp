//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++

class Solution {
  public:
  int binarySearch( vector<int> & v , int key )
  {
      int low = 0 , high = v.size()  ;
      int mid = low + ( high - low )/2;
      
      while( low < high )
      {
          if( v[mid] >= key)
          {
               high= mid  ;
          }
          else
          {
              low = mid + 1 ;
          }
          mid = low + ( high - low )/2;
      }
      if( low < v.size() and v[low] < key )
      {
          low++ ;
      }
      
      return low ;
  }
    vector<int> constructLowerArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        vector<int> ans(n);
        vector<int> v ;
        int k = n - 2 ;
        
        v.push_back( arr[n-1] );
        
        
        for( int i = n - 2 ; i > -1 ; i--)
        {
            int idx = binarySearch( v , arr[i] );
            ans[k--] = idx ;
            v.insert( v.begin() + idx , arr[i] );
            
        }
        ans[ans.size() -1 ] = 0 ;
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
        int n = arr.size();
        Solution ob;
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends