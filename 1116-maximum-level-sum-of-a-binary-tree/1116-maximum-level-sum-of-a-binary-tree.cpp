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
    int maxLevelSum(TreeNode* root) {
        if(root == NULL)    return 0;
        int maxSum = INT_MIN;
        int ans = 0;
        queue<TreeNode*> Q;
        Q.push(root); 
        int level = 1;
        while(!Q.empty()){
            int size = Q.size();
            int sum = 0;

            for(int i=0; i<size; i++){
                sum += Q.front()->val;
                if(Q.front()->left){
                    Q.push(Q.front()->left);
                }
                if(Q.front()->right){
                    Q.push(Q.front()->right);
                }
                Q.pop();
            }
            if(sum > maxSum){
                maxSum = sum;
                ans = level;
            } 
            level++;

        }
        return ans;
    }
};