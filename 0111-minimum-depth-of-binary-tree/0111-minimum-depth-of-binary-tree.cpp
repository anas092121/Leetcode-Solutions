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
    int minDepth(TreeNode* root) {
        int count = 1;
        if (!root)
            return 0;

        queue<TreeNode*> Q;
        Q.push(root);

        while (!Q.empty()) {
            int size = Q.size();
            for(int i=0; i<size; i++){
                if(Q.front()->left || Q.front()->right){
                    if (Q.front()->left)
                        Q.push(Q.front()->left);
                    if (Q.front()->right)
                        Q.push(Q.front()->right);
                }
                else{
                    return count;
                }
                Q.pop();
            }
            count++;
        }
        return count;
    }
};