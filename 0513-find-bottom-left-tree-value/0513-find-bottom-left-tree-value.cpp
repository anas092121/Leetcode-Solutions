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
    int findBottomLeftValue(TreeNode* root) {
        int ans = -1;

        if (!root)
            return ans;

        queue<TreeNode*> Q;
        Q.push(root);

        while (!Q.empty()) {
            int size = Q.size();
            ans = Q.front() -> val;

            for(int i=0; i<size; i++){
                if (Q.front()->left)
                    Q.push(Q.front()->left);
                if (Q.front()->right)
                    Q.push(Q.front()->right);
                Q.pop();
            }

        }
        return ans;
    }
};