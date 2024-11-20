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
    void find(TreeNode* root, int ans, int& res){
        if(root == NULL){
            return;
        }
        // ans;
        res = res>ans ? res : ans;
        find(root->left , ans+1, res);
        find(root->right , ans+1, res);
    }

    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int ans = 0;
        int res = 0;
        find(root ,ans, res);
        return res+1;
    }
};