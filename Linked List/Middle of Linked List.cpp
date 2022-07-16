/*
Brute Force:
  First traverse the Linked list and count the number of nodes present in the linked list and store them into a variable named count.
  Then, you can visit the Linked list again and return the node at position (count/2)th.
  
Better:
 Two pointer approach: we can use two pointers which moves at different rates. 
 First pointer, say slow, will move 1 node at a time while the second pointer, say fast, will move 2 node at a time.
 It implies that when fast pointer covers 2x nodes, at that time slow pointer will cover only x nodes.
 So we can conclude that when fast pointer reaches end of linked list, at that time slow pointer will be at middle node of the list
*/

// Code for two pointer approach

ListNode* middleNode(ListNode* head) {
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast != NULL && fast->next != NULL){
            
            fast = fast->next->next;
            slow= slow->next;
        }
        return slow;
        
 }


/*
Points to be noticed:
When the size of the linked list is odd, the while loop will terminate when the node pointing to last node. And condition (fast->next != NULL) will become false.
When the size of the linked list is even, then the while loop will terminate when the node is actually pointing to NULL. And condition (fast != NULL) will become false.
*/
