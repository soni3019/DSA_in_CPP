class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<vector<TreeNode*>> ans;   // will hold both paths
        vector<TreeNode*> temp;          // temporary path

        cal(root, p, q, ans, temp);

        // now ans[0] = path to p, ans[1] = path to q
        vector<TreeNode*>& path1 = ans[0];
        vector<TreeNode*>& path2 = ans[1];

        int i = 0;
        while (i < path1.size() && i < path2.size() && path1[i] == path2[i]) {
            i++;
        }
     return  path1[i-1];   // last common value
    
    }

    void cal(TreeNode* root, TreeNode* p, TreeNode* q,
             vector<vector<TreeNode*>>& ans, vector<TreeNode*>& temp) {
        if (!root) return;

        temp.push_back(root);

        if (root == p || root == q) {
            ans.push_back(temp);   // save path when hitting p or q
        }

        cal(root->left, p, q, ans, temp);
        cal(root->right, p, q, ans, temp);

        temp.pop_back();
    }

   
};