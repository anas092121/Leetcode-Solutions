class Solution {
public:
    int height(TreeNode* root) {
        if (root == nullptr)
            return 0;

        // Compute the height of left and right subtrees
        int lHeight = height(root->left);
        int rHeight = height(root->right);

        // If any subtree is unbalanced, propagate -1 up
        if (lHeight == -1 || rHeight == -1 || abs(lHeight - rHeight) > 1) {
            return -1;
        }

        return max(lHeight, rHeight) + 1;
    }

    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};
