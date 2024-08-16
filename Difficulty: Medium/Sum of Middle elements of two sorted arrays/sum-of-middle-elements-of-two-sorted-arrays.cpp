//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int i = 0 , j = 0 ,ans = 0 ;
        int mid =( arr1.size() + arr2.size() ) / 2 ;
        
        int cnt = 0 ;
        
        while ( i < arr1.size() and j < arr2.size() )
        {
            if( arr1[i] < arr2[j] )
            {
                cnt++ ;
                
                if( cnt == mid or cnt == mid + 1 )
                {
                    ans+= arr1[i];
                }
                i++;
            }
            else
            {
                cnt++;
                if( cnt == mid or cnt == mid + 1 )
                {
                    ans+= arr2[j];
                }
                j++;
            }
        }
        
        while( i < arr1.size() )
        {
            cnt++;
            if( cnt == mid or cnt == mid + 1 )
            {
                ans+= arr1[i] ;
            }
            i++;
        }
        while( j < arr2.size() )
        {
            cnt++;
            if(  cnt == mid or cnt == mid + 1 )
            {
                ans+= arr2[j];
            }
            j++;
        }
        
        
        return ( ans );
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends