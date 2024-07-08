//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int binarySearch( vector<int> &arr , int s , int e , int key )
    {
        int mid = s + ( e - s ) / 2 ;
        while( s <= e )
        {
            if( arr[mid] > key )
            {
                e = mid - 1;
            }
            else if ( arr[mid] == key )
            {
                return mid;
            }
            else 
            {
                s = mid + 1 ;
            }
            mid = s + ( e - s ) / 2 ;
        }
        
        return -1 ;
    }
    int search(vector<int>& arr, int key) {
        // complete the function here
        
        int low = 0 , high = arr.size() - 1 ;
        int mid = low + ( high - low ) / 2 ;
        
        while( low < high )
        {
            if( arr[mid] >= arr[0] )
            {
                low = mid + 1 ;
            }
            
            else 
            {
                high = mid ;
            }
            mid = low + ( high - low ) / 2 ;
        }
        
        int pivot = low ;
        
        if( arr[0] <= key and key <= arr[pivot-1] )
        {
            return binarySearch( arr , 0 , pivot - 1 , key );
        }
        else 
        {
            return binarySearch( arr , pivot , arr.size() - 1 , key );
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends