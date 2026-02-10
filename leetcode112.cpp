class Solution {
public:
    void ischeec(TreeNode* root, bool &chec, int currsum) {
        if (root == nullptr) return;  // safety check

        // Leaf node: check if remaining sum equals this node's value
        if (root->left == nullptr && root->right == nullptr && currsum == 0) {
            chec = true;
            return;
        }

        // Only recurse if current sum is at least this node's value
        if (currsum >= root->val) {
            int newSum = currsum - root->val;
            ischeec(root->left, chec, newSum);
            ischeec(root->right, chec, newSum);
        }
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        bool chec = false;
        ischeec(root, chec, targetSum);
        return chec;
    }
};