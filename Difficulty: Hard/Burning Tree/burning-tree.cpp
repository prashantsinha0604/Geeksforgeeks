//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    Node* createMapping(Node* root, map<Node*, Node*>& childToParent, int target) {
    Node* res = NULL;
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* front = q.front();
        q.pop();

        if (front->data == target) {
            res = front;
        }

        if (front->left) {
            q.push(front->left);
            childToParent[front->left] = front;
        }

        if (front->right) {
            q.push(front->right);
            childToParent[front->right] = front;
        }
    }

    return res;
}

int burnTree(Node* root, map<Node*, Node*>& childToParent) {
    map<Node*, bool> visited;
    queue<Node*> q;

    q.push(root);
    visited[root] = true;

    int ans = 0;

    while (!q.empty()) {
        int size = q.size();
        bool flag = false;

        for (int i = 0; i < size; i++) {
            Node* frontNode = q.front();
            q.pop();

            if (frontNode->left && !visited[frontNode->left]) {
                flag = true;
                q.push(frontNode->left);
                visited[frontNode->left] = true;
            }
            if (frontNode->right && !visited[frontNode->right]) {
                flag = true;
                q.push(frontNode->right);
                visited[frontNode->right] = true;
            }
            if (childToParent[frontNode] && !visited[childToParent[frontNode]]) {
                flag = true;
                q.push(childToParent[frontNode]);
                visited[childToParent[frontNode]] = true;
            }
        }

        if (flag) {
            ans++;
        }
    }

    return ans;
}

int minTime(Node* root, int target) {
    map<Node*, Node*> childToParent;
    Node* targetNode = createMapping(root, childToParent, target);
    int ans = burnTree(targetNode, childToParent);
    return ans;
}
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends