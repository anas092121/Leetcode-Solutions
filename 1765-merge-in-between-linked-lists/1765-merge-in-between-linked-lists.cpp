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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        while(--a){
            temp = temp->next;
        }
        ListNode* A = temp;

        temp = list1;
        b++;
        while(b--){
            temp = temp->next;
        }
        ListNode* B = temp;

        ListNode* tail = list2;
        while(tail->next){
            tail = tail->next;
        }

        // adding both lists
        A -> next = list2;
        tail -> next = B;

        return list1; 
    }
};