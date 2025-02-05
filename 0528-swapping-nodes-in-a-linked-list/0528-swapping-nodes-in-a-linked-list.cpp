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
    ListNode* getKthNode(ListNode* head, int k) {
        ListNode* current = head;
        int count = 1;

        while (current && count < k) {
            current = current->next;
            count++;
        }

        return current; // Returns nullptr if k is out of bounds
    }

    ListNode* getKthFromLast(ListNode* head, int k) {
        ListNode *first = head, *second = head;

        for (int i = 0; i < k; i++) {
            if (!first)
                return nullptr;
            first = first->next;
        }
        while (first) {
            first = first->next;
            second = second->next;
        }
        return second;
    }

    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* start = getKthNode(head, k);
        ListNode* end = getKthFromLast(head, k);

        swap(start->val, end->val);
        return head;
    }
};