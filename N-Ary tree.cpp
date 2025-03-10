// C++ Code to find the depth of an N-ary tree
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    vector<Node*> children;

    Node(int val) {
        data = val;
    }
};

// Recursive function to calculate maximum depth
int maxDepth(Node* root) {
  
    // If the node is null, depth is 0
    if (!root) {
        return 0;
    }

    int depth = 0;

    // Recur for all children and find the maximum depth
    for (auto child : root->children) {
        depth = max(depth, maxDepth(child));
    }

    // Add 1 to include the current node
      // in the depth count
    return depth + 1;
}

int main() {

    // Representation of given N-ary tree
    //          1
    //       /  |  \
    //     2    3    4
    //   /             \
    //  5               6
    Node* root = new Node(1);
    root->children.push_back(new Node(2));
    root->children.push_back(new Node(3));
    root->children.push_back(new Node(4));
    root->children[0]->children.push_back(new Node(5));
    root->children[2]->children.push_back(new Node(6));

    cout << maxDepth(root);

    return 0;
}
