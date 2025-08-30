
class Solution {
public:
    // merge two sorted lists
    ListNode* merge(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;

        if (l1->val <= l2->val) {
            l1->next = merge(l1->next, l2);
            return l1;
        } else {
            l2->next = merge(l1, l2->next);
            return l2;
        }
    }

    // find middle node
    ListNode* getMiddle(ListNode* head) {
        if (!head) return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // main sort function
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;

        // split list into two halves
        ListNode* mid = getMiddle(head);
        ListNode* right = mid->next;
        mid->next = nullptr;

        // recursive sort
        ListNode* leftSorted = sortList(head);
        ListNode* rightSorted = sortList(right);

        // merge sorted halves
        return merge(leftSorted, rightSorted);
    }
};
