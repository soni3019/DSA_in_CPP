class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        // Case 1: Empty tree → create root
        if (root == NULL) return new TreeNode(val);

        // Case 2: Traverse to find correct spot
        TreeNode* cur = root;
        while (true) {
            if (cur->val < val) {
                if (cur->right != NULL) {
                    cur = cur->right;
                } else {
                    cur->right = new TreeNode(val);
                    break;
                }
            }

            if (cur->val > val) {
                if (cur->left != NULL) {
                    cur = cur->left;
                } else {
                    cur->left = new TreeNode(val);
                    break;
                }
            }
        }

        // Return original root
        return root;
    }
};