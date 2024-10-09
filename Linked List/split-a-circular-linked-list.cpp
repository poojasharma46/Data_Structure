pair<Node *, Node *> splitList(struct Node *head) {
        
        Node* slow = head;
        Node* fast = head;
        
        while(fast->next != head && fast->next->next != head){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* newHead = slow->next;
       
        
        if(fast->next == head){
            fast->next = newHead;
        }
        else
            fast->next->next = newHead;
        slow->next = head;
        
        return {head, newHead};
        
        
        
    }