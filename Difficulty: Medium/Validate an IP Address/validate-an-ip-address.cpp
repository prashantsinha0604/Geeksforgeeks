//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string str) {
        // code here
        
        if( str.size() > 15 )
        {
            return false ;
        }
        
        vector<string > temp ;
        string s ;

        for( int i = 0 ; i < str.size() ; i++ )
        {
            if( str[i] != '.')
            {
                s.push_back( str[i] );
            }
            else
            {
                temp.push_back( s );
                s = "";
            }
            
        }
        temp.push_back( s );
        
        if( temp.size() != 4 )
        {
            return false ;
        }
        
        for( string& i : temp )
        {
            if( i.size() > 1 and i[0] == '0')
            {
                return false ;
            }
            if( i.size() == 0  or stoi( i ) > 255 )
            {
                return false ;
            }
        }
        
        return true ;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends