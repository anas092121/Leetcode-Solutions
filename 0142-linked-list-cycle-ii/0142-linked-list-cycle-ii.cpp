/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map <ListNode* , int> count;
        while(head){
            if(count[head]){
                return head;
            }
            count[head]++;
            head = head->next;
        }
        return NULL;
    }
};