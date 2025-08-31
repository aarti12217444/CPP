class Solution {
public:
    // Function to calculate the length of the linked list
    int getLength(ListNode* head){
        int len = 0;
        while(head){
            ++len;              
            head = head->next;  
        }
        return len;             
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == 0) return 0;   

        int len = getLength(head);        
        int actualRotateK = (k % len);    // rotation ke length se mod krna hain
                                          // taaki extra rotations handle ho
        if(actualRotateK == 0) return head;  // if rotation ki jarurat na ho to  same head return

        // नए last node की position निकालते हैं (len - actualRotateK - 1)
        int newLastNodePos = len - actualRotateK - 1;

        // newLastNode को head से शुरू करते हैं और सही position तक ले जाते हैं
        ListNode* newLastNode = head;
        for(int i = 0; i < newLastNodePos; i++){
            newLastNode = newLastNode->next;
        }

        // newHead अब वो node होगा जो rotate होकर list का पहला node बनेगा
        ListNode* newHead = newLastNode->next;

        // पुराने last node (newLastNode) को null से terminate कर देते हैं
        newLastNode->next = 0;

        // अब newHead से लेकर end तक जाते हैं
        ListNode* it = newHead;
        while(it->next){
            it = it->next;
        }

        // end node को पुराना head से जोड़ते हैं
        it->next = head;

        // नया head return करते हैं
        return newHead;
    }
};
