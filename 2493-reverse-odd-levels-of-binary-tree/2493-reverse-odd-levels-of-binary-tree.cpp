#include <iostream>
#include <vector>
#include <queue>
using namespace std;


class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> Q;
        Q.push(root);
        bool toReverse = false; // Start with even level (0)

        while (!Q.empty()) {
            int levelSize = Q.size();
            vector<TreeNode*> levelNodes;

            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = Q.front();
                Q.pop();
                levelNodes.push_back(node);

                if (node->left) Q.push(node->left);
                if (node->right) Q.push(node->right);
            }

            if (toReverse) {
                int left = 0, right = levelNodes.size() - 1;
                while (left < right) {
                    swap(levelNodes[left]->val, levelNodes[right]->val);
                    left++;
                    right--;
                }
            }

            toReverse = !toReverse;
        }
        return root;
    }
};
