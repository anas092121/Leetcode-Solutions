class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k, nullptr);
        int count = 0;
        ListNode* temp = head;
        
        // Count total nodes
        while (temp) {
            count++;
            temp = temp->next;
        }

        int baseSize = count / k;  // Minimum nodes in each part
        int extraNodes = count % k; // Additional nodes to distribute

        ListNode* curr = head;
        for (int i = 0; i < k && curr; i++) {
            ans[i] = curr;
            int partSize = baseSize + (extraNodes > 0 ? 1 : 0);
            extraNodes--;

            // Traverse partSize-1 nodes and disconnect
            for (int j = 1; j < partSize; j++) {
                curr = curr->next;
            }
            ListNode* nextPart = curr->next;
            curr->next = nullptr; // Break the list
            curr = nextPart;
        }

        return ans;
    }
};
