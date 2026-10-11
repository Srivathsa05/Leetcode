class Solution {
public:
    vector<int> collectNodes(TreeNode* root){
        vector<int> temp;

        if(root == NULL)
            return temp;

        if(root->right == NULL && root->left == NULL){
            temp.push_back(root->val);
            return temp;
        }

        vector<int> left = collectNodes(root->left);
        vector<int> right = collectNodes(root->right);

        temp.insert(temp.end(), left.begin(), left.end());
        temp.insert(temp.end(), right.begin(), right.end());

        return temp;
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1 = collectNodes(root1);
        vector<int> ans2 = collectNodes(root2);

        if(ans1.size() != ans2.size())
            return false;

        for(int i = 0; i < ans1.size(); i++){
            if(ans1[i] != ans2[i])
                return false;
        }

        return true;
    }
};