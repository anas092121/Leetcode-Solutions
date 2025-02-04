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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* curr = head->next;
        ListNode* prev = head;
        ListNode* ans = curr;

        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;

            if (nextNode == NULL || nextNode->next == NULL) {
                prev->next = nextNode;
                break;
            }

            prev->next = nextNode->next;
            prev = nextNode;
            curr = prev->next;
        }

        return ans;

    }
};