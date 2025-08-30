
Node* merge(Node* a, Node* b){
    if(!a) return b;
    if(!b) return a; 
    
    Node* ans=0;
    if(a->data < b->data){
        ans=a;
        a->bottom=merge(a->bottom,b);
    }else{
        ans=b;
        b->bottom=merge(a,b->bottom);
    }
    return ans;
}
class Solution {
  public:
    Node *flatten(Node *root) {
        // code here
        if(!root) return 0;
        Node* mergedLL=merge(root, flatten(root->next));
        return mergedLL;
    }
};