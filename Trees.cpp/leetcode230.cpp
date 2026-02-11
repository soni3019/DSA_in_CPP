class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int result;
        int count=0;
       find(root,k,result,count);
       return result;
    }
 void   find(TreeNode* root,int k,int &result,int &count){

if(root==NULL)  return;
find(root->left,k,result,count);
count++;
if(count==k){
    result=root->val;
   return;
}
find(root->right,k,result,count);

    }
};