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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) {
            return result;
        }
        deque<TreeNode*> q ;
        q.push_front(root);
        int level = 0;
        while (q.size()) {
            vector<int> temp(q.size(), 0);
            for (int i = q.size(); i > 0; i--) {
                TreeNode* node = q.front(); q.pop_front();
                if (level % 2) {
                    // go right to left
                    temp[i - 1] = node->val;
                } else {
                    // go left to right
                    temp[temp.size() - i] = node->val;
                }
                if (node->left) {
                    q.push_back(node->left);
                }
                if (node->right) {
                    q.push_back(node->right);
                }
            }
            level++;
            result.push_back(temp);
        }
        return result;
    }
};