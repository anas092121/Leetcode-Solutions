using namespace std;
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int first = -1, last = -1, prevIdx = -1;
        int minDist = INT_MAX, index = 0;
        
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = (head) ? head->next : nullptr;
        
        while (next) {
            if (prev && ((curr->val > prev->val && curr->val > next->val) ||
                         (curr->val < prev->val && curr->val < next->val))) {
                if (first == -1) first = index;
                if (prevIdx != -1) minDist = min(minDist, index - prevIdx);
                prevIdx = index;
                last = index;
            }
            prev = curr;
            curr = next;
            next = next->next;
            index++;
        }

        if (first == last) return {-1, -1}; // Less than two critical points

        return {minDist, last - first};
    }
};
