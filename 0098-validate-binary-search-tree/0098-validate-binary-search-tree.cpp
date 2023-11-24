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
    bool isValidBST(TreeNode* root) {
        return bst(root, LLONG_MIN, LLONG_MAX);
    }

    bool bst(TreeNode* root, long long min_val, long long max_val) {
        if (root == NULL) {
            return true;
        }

        if (!(min_val < root->val && root->val < max_val)) {
            return false;
        }

        return bst(root->left, min_val, root->val) && bst(root->right, root->val, max_val);
    }
};