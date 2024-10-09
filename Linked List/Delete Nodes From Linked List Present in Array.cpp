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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        unordered_set<int> s;

        for(int num : nums){
            s.insert(num);
        }

        ListNode* dummy_head = new ListNode(0);
        ListNode* dummy = dummy_head;
        ListNode* curr = head;

        while(curr != NULL){

            if(s.find(curr->val) == s.end()){
                dummy->next = curr;
                dummy = dummy->next;
            }
            curr = curr->next;
        }
        dummy->next = NULL;
        return dummy_head->next;
        
    }
};