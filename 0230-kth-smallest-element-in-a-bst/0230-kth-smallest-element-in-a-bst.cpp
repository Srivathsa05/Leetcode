class Solution {
public:
    vector<int> nodes;

    void traverse(TreeNode* root) {
        if (root == NULL) return;

        nodes.push_back(root->val);
        traverse(root->left);
        traverse(root->right);
    }

    int kthSmallest(TreeNode* root, int k) {
        traverse(root);

        sort(nodes.begin(), nodes.end());

        return nodes[k - 1];
    }
};