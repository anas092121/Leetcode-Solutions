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

    void solve(TreeNode* root, string& str){
        if(root == NULL){
            return;
        }
        else if(root->left==NULL && root->right==NULL){
            str += to_string(root->val) + "-";
            return;
        }

        solve(root->left, str);
        solve(root->right, str);
    }


    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string str1 = "";
        string str2 = "";

        solve(root1, str1);
        solve(root2, str2);

        return str1 == str2;
    }
};