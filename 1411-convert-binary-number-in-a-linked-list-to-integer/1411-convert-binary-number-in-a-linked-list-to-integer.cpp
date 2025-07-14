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
    void reverse(ListNode* &head, ListNode* curr, ListNode* prev){
        if(curr==NULL){
            head=prev;
            return;
        }
        reverse(head, curr->next, curr);
        curr->next=prev;
    }

    int getDecimalValue(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        reverse(head, curr, prev);

        curr=head;
        while(curr!=NULL){
            cout<<curr->val<<",";
            curr=curr->next;
        }
        cout<<endl;
        curr=head;
        long int ans=0;
        int count=0;
        while(curr != NULL){
            long int dig = curr->val;
            long int sum = dig*pow(2 , count);
            ans = ans+sum;
            curr=curr->next;
            count++;
            cout<<sum<<",";
        }
        return ans;
    }
};