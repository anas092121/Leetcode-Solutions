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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;

        if (!root)
            return ans;

        queue<TreeNode*> Q;
        Q.push(root);

        while (!Q.empty()) {
            double size = Q.size();
            double sum = 0;

            for(int i=0; i<size; i++){
                sum += Q.front()->val;
                if (Q.front()->left)
                    Q.push(Q.front()->left);
                if (Q.front()->right)
                    Q.push(Q.front()->right);
                Q.pop();
            }
            ans.push_back(sum/size);


        }
        return ans;
    }
};