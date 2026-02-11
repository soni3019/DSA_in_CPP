class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
              vector<int> ans;
       done(root, ans);
       return ans;
    }
void  done(TreeNode* root, vector<int>&ans){
        if(root==NULL){
            return  ;
        }
         ans.push_back(root->val);
        done(root->left,ans);
        done(root->right,ans);
       
    }
    
};