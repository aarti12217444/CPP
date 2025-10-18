#include<iostream>
using namespace std;

class TreeNode{
    public:
    char data;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(char val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
//print tree 
void printTree(TreeNode* node,int space = 0, int indent=3){
    if( node==nullptr) return;
    
    space += indent;
    printTree(node->right,space);
    
    cout<<endl;
    for(int i=indent;i<space;i++)
        cout<<" ";
    cout<<node->data<<"\n";
    
    printTree(node->left,space);
}
//pre-order
void preOrder(TreeNode* node){
    if(node == nullptr){
        return;
    }
    cout<<node->data<<",";
    preOrder(node->left);
    preOrder(node->right);
}

//In-order
void inOrder(TreeNode* node){
    if(node == nullptr){
        return;
    }
    preOrder(node->right);
    cout<<node->data<<",";
    preOrder(node->right);
}

//post-order
void postOrder(TreeNode* node){
    if(node == nullptr){
        return;
    }
    preOrder(node->right);
    preOrder(node->right);
    cout<<node->data<<",";
}

int main(){
    TreeNode* root=new TreeNode('R');
    TreeNode* nodeA=new TreeNode('O');
    TreeNode* nodeB=new TreeNode('T');
    TreeNode* nodeC=new TreeNode('F');
    TreeNode* nodeD=new TreeNode('B');
    TreeNode* nodeE = new TreeNode('E');
    TreeNode* nodeF = new TreeNode('F');
    TreeNode* nodeG = new TreeNode('G');
    
    root->left=nodeA;
    root->right=nodeB;
    
    nodeA->left=nodeC;
    nodeA->right=nodeD;
    
    nodeB->left=nodeE;
    nodeB->right=nodeF;
    
    nodeF->right=nodeG;
    
    cout<<"\nTree Structure:\n";
    printTree(root);
    
    cout<<"Pre-order traversal: ";
    preOrder(root);
    cout<<endl;
    
    cout<<"in-order traversal: ";
    inOrder(root);
    cout<<endl;
    
    cout<<"post-order traversal: ";
    postOrder(root);
    cout<<endl;
    
    // cout<<"Root->right->left->data: "<<root->right->left->data<<endl;
    
    return 0;
}