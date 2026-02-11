class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        return 0;
        int lh=maxDepth(root->left);
            int lr=maxDepth(root->right);
            return 1+max(lh,lr);
    }
};