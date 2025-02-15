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
    void listReverse(ListNode*& head, ListNode* curr, ListNode* prev) {
        if (curr == NULL) {
            head = prev;
            return;
        }
        listReverse(head, curr->next, curr);
        curr->next = prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(-1);
        ListNode* head = ans;
        ListNode* prev = NULL;
        ListNode* curr = l1;
        listReverse(l1, curr, prev);
        curr = l2;
        listReverse(l2, curr, prev);


        int carry = 0;
        while(l1 && l2){
            int sum = l1->val + l2->val + carry; 
            int res = sum%10;
            carry = sum/10;

            ListNode* temp = new ListNode(res);
            ans -> next = temp;
            ans = ans->next;
            l1 = l1->next;
            l2 = l2->next;

        }
        while(l1){
            int sum = l1->val + carry; 
            int res = sum%10;
            carry = sum/10;

            ListNode* temp = new ListNode(res);
            ans -> next = temp;
            ans = ans->next;
            l1 = l1->next;
        }
        while(l2){
            int sum = l2->val + carry; 
            int res = sum%10;
            carry = sum/10;

            ListNode* temp = new ListNode(res);
            ans -> next = temp;
            ans = ans->next;
            l2 = l2->next;
        }
        if(carry){
            ListNode* temp = new ListNode(carry);
            ans -> next = temp;
            ans = ans->next;
        }

        curr = head->next;
        prev = NULL;
        listReverse(head->next, curr, prev);
        return head -> next;
    }
};