class Solution {
public:
    void inorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL)
            return;

        inorder(root->left, ans);   // Left
        ans.push_back(root->val);   // Root
        inorder(root->right, ans);  // Right
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;        // 1️⃣ create vector
        inorder(root, ans);     // 2️⃣ fill vector
        return ans;             // 3️⃣ return vector
    }
};
