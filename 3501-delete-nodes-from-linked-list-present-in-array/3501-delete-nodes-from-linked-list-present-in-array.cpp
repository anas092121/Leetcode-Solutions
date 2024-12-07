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
        map <int,int> count;
        for(auto it : nums){
            count[it]++;
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        ListNode* temp = head;

        while(temp){
            int x = temp -> val;
            if(!count[x]){
                curr->next = temp;
                curr = temp;
            }
            temp = temp->next;
        }
        curr->next = NULL;

        return dummy->next; 
    }
};