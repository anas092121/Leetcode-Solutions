/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<string> ans;

    string reverseString(const std::string& str) {
        string reversed = str;
        reverse(reversed.begin(), reversed.end());
        return reversed;
    }

    void solve(TreeNode* root, string res) {
        if (root == NULL) {
            return;
        }

        char ch = 'a' + root->val;
        res += ch;

        if (!root->left && !root->right) {
            reverse(res.begin(), res.end());
            ans.push_back(res);
            return;
        }

        solve(root->left, res);
        solve(root->right, res);
    }

    string smallestFromLeaf(TreeNode* root) {
        if (root == NULL) {
            return "";
        }
        solve(root, "");
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};
