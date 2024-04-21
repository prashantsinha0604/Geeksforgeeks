//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        
        int first = -1 , sec = -1 ;
        
        int s = 0 , e = n -1  ;
        
        int mid = s + ( e -s )/2 ;
        
        while ( s <= e )
        {
            if(arr[mid] == x )
            {
                first = mid ;
                e = mid - 1 ;
            }
            else if ( arr[mid] > x )
            {
                e = mid - 1 ;
            }
            else 
            {
                s = mid + 1 ;
            }
            mid = s + ( e -s )/2 ;
        }
        
         s = 0 , e = n -1  ;
        
         mid = s + ( e -s )/2 ;
        
        while ( s <= e )
        {
            if ( arr[mid] == x )
            {
                sec = mid;
                s = mid + 1 ;
            }
            else if ( arr[mid] > x )
            {
                e = mid - 1 ;
            }
            else 
            {
                s = mid + 1 ;
            }
            mid = s + ( e -s )/2 ;
        }
        
        return { first , sec  } ;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends