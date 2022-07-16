// This file has the method to reverse a Linked List

ListNode* reverse(ListNode* head){
  
  ListNode* curr = head;
  ListNode* next;
  ListNode* prev = NULL;
  
  while(curr != NULL){
    
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  
  return prev;
 }
