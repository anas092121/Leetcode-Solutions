/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;

        if (!root)
            return ans;

        queue<Node*> Q;
        Q.push(root);

        while (!Q.empty()) {
            int size = Q.size();
            vector<int> temp;

            for(int i=0; i<size; i++){
                temp.push_back(Q.front()->val);

                for(int j=0; j<Q.front()->children.size(); j++){
                    Q.push(Q.front()->children[j]);
                }
                Q.pop();
            }
            ans.push_back(temp);

        }
        return ans;
    }
};