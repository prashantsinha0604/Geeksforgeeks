//{ Driver Code Starts
// Initial Template for C++
//  C program to find n'th Node in linked list
#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to get the kth node from the last of a linked list*/
int getKthFromLast(struct Node *head, int k);

/* Driver program to test above function*/

// } Driver Code Ends
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        Node * temp = head ;
        
        int size = 0 ;
        while( temp )
        {
            size++ ;
            temp = temp -> next ;
        }
        if( size < k )
        {
            return -1 ;
        }
        if( size == k )
        {
            return head -> data ;
        }
        
        if( size == 1 )
        {
            return head -> data ;
        }
        
        
        int cnt = size - k , i = 1  ;
        
        temp = head ;
        while( i < cnt and temp )
        {
            i++;
            temp = temp -> next ;
        }
        
        
        int ans = temp -> next -> data ;
        return ans ;
    }
};


//{ Driver Code Starts.

int main() {
    int T, i, n, l, k;

    cin >> T;

    while (T--) {
        struct Node *head = NULL, *tail = NULL;

        cin >> n >> k;
        int firstdata;
        cin >> firstdata;
        head = new Node(firstdata);
        tail = head;
        for (i = 1; i < n; i++) {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        Solution obj;
        cout << obj.getKthFromLast(head, k) << endl;
    }
    return 0;
}
// } Driver Code Ends