class Solution {
public:
    void transform(TreeNode* root, int& sum) {
        if (!root) return;

        transform(root->right, sum);  // Traverse right subtree first
        sum += root->val;             // Accumulate sum
        root->val = sum;              // Update node value
        transform(root->left, sum);   // Traverse left subtree
    }

    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        transform(root, sum);
        return root;
    }
};
