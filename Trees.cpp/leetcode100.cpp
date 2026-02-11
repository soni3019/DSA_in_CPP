class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Case 1: both null → same
        if (!p && !q) return true;

        // Case 2: one null, one not → different
        if (!p || !q) return false;

        // Case 3: values differ → different
        if (p->val != q->val) return false;

        // Case 4: compare left and right simultaneously
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};