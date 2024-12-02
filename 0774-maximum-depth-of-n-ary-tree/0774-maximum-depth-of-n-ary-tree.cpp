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
    void solve(Node* root, int& ans, int ht){
        if(root==NULL){
            ans = max(ans,ht);
            return;
        }

        ht++;
        ans = max(ans,ht);

        // vector<Node*> children;
        for(int i=0; i<root->children.size(); i++){
            solve(root->children[i], ans, ht);
        }
    }


    int maxDepth(Node* root) {
        int ans = 0;
        solve(root, ans, 0);
        return ans;
    }
};