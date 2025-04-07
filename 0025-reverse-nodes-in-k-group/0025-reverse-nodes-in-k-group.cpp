class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;
        while (curr && count < k) {
            curr = curr->next;
            count++;
        }
        if (count < k) return head;

        ListNode* prev = reverseKGroup(curr, k);
        while (count--) {
            ListNode* temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
            
        }
        return prev;
    }
};
