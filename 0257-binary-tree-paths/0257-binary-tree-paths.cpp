class Solution {
public:
    vector<string> ans;

    void solve(TreeNode* root, string res) {
        if (root == NULL) {
            return;
        }

        res += to_string(root->val); // Add the current node's value

        if (!root->left && !root->right) { // Leaf node
            ans.push_back(res); // Store the path
            return;
        }

        res += "->"; // Add the arrow for further recursion
        solve(root->left, res);
        solve(root->right, res);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        if (root == NULL) {
            return ans;
        }
        solve(root, ""); // Start recursion with an empty path
        return ans;
    }
};
