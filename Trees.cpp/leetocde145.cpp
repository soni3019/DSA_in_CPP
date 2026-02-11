class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
       done(root, ans);
       return ans;
    }
void  done(TreeNode* root, vector<int>&ans){
        if(root==NULL){
            return  ;
        }
        done(root->left,ans);
        done(root->right,ans);
        ans.push_back(root->val);
    }
};