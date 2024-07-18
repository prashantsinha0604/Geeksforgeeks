//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        string s ="";
        Node * i = head ;
        
        while( i )
        {
            s.push_back( i -> data + 48 );
            i = i -> next ;
        }
        
        int  j = s.size() - 1 ;
        string ans = "";
        int carry = 1 ;
        while( j > -1 )
        {
            ans.push_back( ((carry + s[j] - 48 )% 10) + 48 );
            carry = (carry + s[j] - 48 ) / 10 ;
            j--;
        }
        
        if( carry )
        {
            ans.push_back( (carry + 48) );
        }
        
        reverse( begin( ans) , end( ans) );
        
        Node* dummyNode = new Node(0);
        Node* dummy = dummyNode;
        
        for(int i = 0; i < ans.size(); i++ )
        {
            Node* temp = new Node( ans[i] - '0' );
            dummy -> next = temp;
            dummy = dummy -> next;
        }
        
        return dummyNode -> next;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends