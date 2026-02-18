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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        TreeNode*root=valid(preorder,i,INT_MAX);
return root;
        }
        TreeNode *valid(vector<int>&A, int &i,int bound){

            if(i==A.size()||A[i]>bound)   return NULL;
            TreeNode *root=new TreeNode(A[i++]);
root->left=valid(A,i,root->val);
root->right=valid(A,i,bound);
return root;
        }
    
};