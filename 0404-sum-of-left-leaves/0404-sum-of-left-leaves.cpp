/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root, int& sum, int flag){
        if(root == NULL){
            return ;
        }
        if(root->left==NULL && root->right==NULL && flag==1){
            sum += root->val;
        }

        solve(root->left, sum, 1);
        solve(root->right, sum, -1);
    }


    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        solve(root, sum, 0);
        return sum;
    }
};