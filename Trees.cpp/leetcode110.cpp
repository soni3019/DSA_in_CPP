class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return heightcal(root)!=-1;
    }
    int heightcal(TreeNode*root){
        if(root==NULL)   return 0;
        int lh=heightcal(root->left);
        if(lh==-1)  return -1;
          int rh=heightcal(root->right);
        if(rh==-1)  return -1;
        if(abs(lh-rh)>1)  return -1;
        return max(lh,rh)+1;
    }
};