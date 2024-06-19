//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here 
        
        int s , h , mid ;
        s = 0 , h = n - 1 , mid = 0 ;
        
        while( mid <= h )
        {
            if ( arr[mid] == 0 )
            {
                swap( arr[s] , arr[mid] ) ;
                mid++;
                s++;
            }
            else if (arr[mid] == 2 )
            {
                swap( arr[mid] , arr[h] );
                h--;
            }
            else 
            {
                mid++ ;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends