//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        // Your code here
       vector < int > ans ;
       
       int first = -1 , second = -1 ;
       for(int i = 0 ; i < n+2 ; i++ )
       {
              int x =  abs(arr[i]);
              
              if( arr[x-1] > 0 )
              {
                  arr[x-1] = arr[x-1] * -1;
              }
              else
              {
                  if( first == -1 )
                  {
                      first = x;
                  }
                  else
                  {
                      second = x;
                  }
              }
              
         }
         return {first , second };
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends