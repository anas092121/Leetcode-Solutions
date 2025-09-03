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
    bool check(TreeNode* root, int& data){
        if(!root)   return true;

        int x = root -> val;
        if(x == data){
            return check(root->left, data) && check(root->right, data);
        }else{
            return false;
        }
    }

    bool isUnivalTree(TreeNode* root) {
        if(root == NULL)    return false;
        int data = root -> val;
        return check(root, data);
    }
};