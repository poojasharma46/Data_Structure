/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* reverseEvenLengthGroups(ListNode* st, ListNode *end) {

        ListNode *curr = st;
        ListNode *prev = NULL;
        ListNode *next;

        while(curr != end){

            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        st->next = curr->next;
        curr->next = prev;
        return curr;
    }

    ListNode* reverseEvenLengthGroups(ListNode* head) {

        int len = 1;
        ListNode *st = head, *end = head;
        ListNode *curr = head, *prev;
        int flag = 0;
        while(curr != NULL){

            int i = 0;
            int cnt = 0;
            st = curr;
            while(i < len && curr != NULL){
               
                if(i == len-1 || curr->next == NULL)
                    end = curr;
                i++;
                cnt++;
                curr = curr->next;

            }
            len++;
            
            if(cnt%2 == 0){
                prev->next = reverseEvenLengthGroups(st, end);
                prev = st;
            }
            else
                prev = end;
            
        }
        return head;
    }
};