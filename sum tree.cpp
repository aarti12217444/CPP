#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = temp->right = NULL;
    return temp;
}

// Function to Build Tree from a given string
Node* buildTree(string str) {
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    vector<string> ip;
    istringstream iss(str);
    for (string s; iss >> s;)
        ip.push_back(s);

    Node* root = newNode(stoi(ip[0]));
    queue<Node*> queue;
    queue.push(root);

    int i = 1;
    while (!queue.empty() && i < ip.size()) {
        Node* currNode = queue.front();
        queue.pop();

        string currVal = ip[i];
        if (currVal != "N") {
            currNode->left = newNode(stoi(currVal));
            queue.push(currNode->left);
        }

        i++;
        if (i >= ip.size())
            break;

        currVal = ip[i];
        if (currVal != "N") {
            currNode->right = newNode(stoi(currVal));
            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}

class Solution {
public:
    pair<bool, int> isSumTreeFast(Node* root) {
        if (!root)
            return {true, 0};  // Empty tree is a sum tree

        if (!root->left && !root->right)
            return {true, root->data};  // Leaf node is a sum tree

        pair<bool, int> leftAns = isSumTreeFast(root->left);
        pair<bool, int> rightAns = isSumTreeFast(root->right);

        bool isLeftSumTree = leftAns.first;
        bool isRightSumTree = rightAns.first;
        int leftSum = leftAns.second;
        int rightSum = rightAns.second;

        bool condition = (root->data == leftSum + rightSum);

        if (isLeftSumTree && isRightSumTree && condition)
            return {true, root->data + leftSum + rightSum};

        return {false, 0};
    }

    bool isSumTree(Node* root) {
        return isSumTreeFast(root).first;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore newline character after t

    while (t--) {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        cout << (ob.isSumTree(root) ? "true" : "false") << endl;
    }
    return 0;
}
