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
    TreeNode* build(vector<int>& po,int &i,int bound){
        if(i==po.size()||po[i]>bound)return NULL;
        TreeNode* root=new TreeNode(po[i++]);
        root->left=build(po,i,root->val);
        root->right=build(po,i,bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& po) {
        int i=0;
        return build(po,i,INT_MAX);
    }
};