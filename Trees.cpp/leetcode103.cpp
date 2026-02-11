
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;   // ✅ handle empty tree

        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
 vector<int> temp;
        while (!q.empty()) {
            int size = q.size();
            while (size > 0) {
                TreeNode* f = q.front();
                q.pop();
                temp.push_back(f->val);
                if (f->left) q.push(f->left);
                if (f->right) q.push(f->right);
                size--;
            }
            if (level % 2 != 0) {
                reverse(temp.begin(), temp.end());
            }

            ans.push_back(temp);
            level++;
            temp.clear();
        }

        return ans;
    }
};