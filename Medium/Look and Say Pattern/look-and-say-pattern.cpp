//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
        // code here
        string ans = "1";
        
        int cnt = 1 ;
        
        n = n - 1 ;
        string temp = "";
        
        
        while ( n-- )
        {
            for(int i = 0 ; i < ans.size() ; i++ )
            {
                if (ans[i] == ans[i + 1] )
                {
                    cnt++;
                }
                else 
                {
                    temp += (cnt + '0');
                    temp = temp + ans[i];
                    cnt = 1 ;
                }
            }
            
            ans= "";
            ans = temp ;
            temp = "";
        }
        return ans ;
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends