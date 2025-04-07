class Solution {
public:
    ListNode* reverse(ListNode* start, ListNode* end) {
        ListNode* prev = nullptr;
        ListNode* curr = start;
        ListNode* next = nullptr;

        while (curr != end) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head; 

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        for (int i = 1; i < left; ++i) {
            prev = prev->next;
        }
        
        ListNode* start = prev->next;
        ListNode* end = start;

        for (int i = left; i <= right; ++i) {
            end = end->next;
        }

        prev->next = reverse(start, end);

        start->next = end;

        return dummy->next;
    }
};
