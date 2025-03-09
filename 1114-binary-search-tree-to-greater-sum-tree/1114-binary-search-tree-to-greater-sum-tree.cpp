class Solution {
public:
    void transform(TreeNode* root, int& sum) {
        if (!root) return;

        transform(root->right, sum); 
        sum += root->val;             
        root->val = sum;              
        transform(root->left, sum);  
    }

    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        transform(root, sum);
        return root;
    }
};
