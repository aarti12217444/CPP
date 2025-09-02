class Solution {
  public:
    Node* linkdelete(Node* head, int n, int m) {
        if (head == nullptr) return nullptr;

        Node* it = head;

        // Traverse m-1 nodes (to reach the m-th node)
        for (int i = 1; i < m && it != nullptr; i++) {
            it = it->next;
        }

        if (it == nullptr) return head;

        // Now delete next n nodes
        Node* temp = it->next;
        for (int i = 0; i < n && temp != nullptr; i++) {
            Node* del = temp;
            temp = temp->next;
            delete del;
        }

        // Link remaining list
        it->next = temp;

        // Recursive call for remaining list
        linkdelete(temp, n, m);

        return head;
    }
};
