#include <iostream>
#include <vector>
using namespace std;

// Node structure
class Node {
public:
    int data;
    vector<Node*> children;

    Node(int x) {
        data = x;
    }
};

// Function to add a child
void addChild(Node* parent, Node* child) {
    parent->children.push_back(child);
}

// Function to display tree (just to visualize connections)
void display(Node* node) {
    cout << node->data << " -> ";
    for (auto child : node->children) {
        cout << child->data << " ";
    }
    cout << endl;

    for (auto child : node->children) {
        display(child);
    }
}

int main() {
    // Create nodes
    Node* root = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);

    // Construct tree
    addChild(root, n2);
    addChild(root, n3);
    addChild(n2, n4);
    addChild(n2, n5);

    cout << "Tree structure:" << endl;
    display(root);

    return 0;
}
