ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy_head = new ListNode(0);
        ListNode* dummy = dummy_head;
        int carry = 0;

        while(l1 || l2 || carry){
            
            int sum = 0;
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
                
            sum += carry;

            ListNode* newNode = new ListNode(sum%10);
            carry = sum/10;
            dummy->next = newNode;
            dummy = dummy->next;
        }
        return dummy_head->next;

        
    }