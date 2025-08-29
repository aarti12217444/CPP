class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;


     
        int alen = 0, blen = 0;
        a = headA;
        b = headB;
        while(a){ 
            alen++; a=a->next; 
            }
        while(b){ 
            blen++; b=b->next; 
            }

      
        a = headA;
        b = headB;
        if(alen > blen){
            int diff = alen - blen;
            while(diff--) a = a->next;
        } else {
            int diff = blen - alen;
            while(diff--) b = b->next;
        }

       
        while(a && b){
            if(a == b) return a;
            a = a->next;
            b = b->next;
        }

        return nullptr;
    }
};
