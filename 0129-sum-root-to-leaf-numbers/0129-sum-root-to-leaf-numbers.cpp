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

    vector<int> ans;

    void solve(TreeNode* root, int num) {
        if (root == NULL) {
            return;
        }

        num = num*10 + root->val;

        if (!root->left && !root->right) { 
            ans.push_back(num);
            return;
        }
        solve(root->left, num);
        solve(root->right, num);
    }


    int sumNumbers(TreeNode* root) {
        solve(root,0);
        int sum = 0;
        for(auto it : ans){
            sum += it;
        }
        return sum;
    }
};


