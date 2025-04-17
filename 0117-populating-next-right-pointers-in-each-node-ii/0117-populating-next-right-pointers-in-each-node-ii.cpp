class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return root;
        queue<Node*> Q;
        Q.push(root);

        while (!Q.empty()) {
            int size = Q.size();

            for (int i = 0; i < size; i++) {
                Node* curr = Q.front();
                Q.pop();
                if (i < size - 1)
                    curr->next = Q.front();
                if (curr->left)
                    Q.push(curr->left);
                if (curr->right)
                    Q.push(curr->right);
            }
        }
        return root;
    }
};
