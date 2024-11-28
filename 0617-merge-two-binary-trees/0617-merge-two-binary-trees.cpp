class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        // Base cases
        if (!root1 && !root2) return nullptr;
        if (!root1) return root2;
        if (!root2) return root1;

        // Merge the current nodes
        TreeNode* merged = new TreeNode(root1->val + root2->val);
        
        // Recursively merge left and right subtrees
        merged->left = mergeTrees(root1->left, root2->left);
        merged->right = mergeTrees(root1->right, root2->right);

        return merged;
    }
};
