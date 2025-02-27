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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    ListNode* doubleIt(ListNode* head) {
        head = reverseList(head);
        int carry = 0;
        ListNode* curr = head;
        ListNode* prev = curr;

        while(curr){
            prev = curr;
            int sum = 2 * curr->val + carry;
            int dig = sum%10;
            carry = sum/10;
            curr -> val = dig;
            curr = curr->next;
        }
        if(carry){
            ListNode* temp = new ListNode(carry);
            prev->next = temp;
        }

        
        return reverseList(head);;
    }
};