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
    void reorderList(ListNode* head) {

        if (!head || !head->next) return;

        vector<ListNode*> vt;
        ListNode* curr = head;
        while(curr){
            vt.push_back(curr);
            curr = curr -> next;
        } 
        
        int st = 0;
        int end = vt.size()-1;
        vt[end] -> next =  nullptr;
        curr = head;
        curr->next = vt[end];
        // curr -> next = vt[end];
        curr = curr->next;
        st++,end--;

        while(st <= end){
            curr -> next = vt[st];
            curr = curr -> next;
            curr -> next = vt[end];
            curr = curr -> next;

            cout<<vt[st]->val;
            cout<<vt[end]->val;
            st++;
            end--;
        }
        curr->next = nullptr;
    }
};