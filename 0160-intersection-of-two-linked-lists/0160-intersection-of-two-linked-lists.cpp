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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map <ListNode* , int> count;
        while(headA){
            count[headA]++;
            headA = headA->next;
        }
        while(headB){
            if(count[headB]){
                return headB;
            }
            headB = headB->next;
        }
        return NULL;
    }
};