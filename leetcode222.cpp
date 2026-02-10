class Solution {
public:
void  count(TreeNode*root,int &counts ){
       
        if(root==NULL){
            return  ;
        }
        counts++;
      
        count(root->left,counts);
        count(root->right,counts);

}
    int countNodes(TreeNode* root) {

       int counts=0;
       count(root,counts);
       return counts;

    }
    
};