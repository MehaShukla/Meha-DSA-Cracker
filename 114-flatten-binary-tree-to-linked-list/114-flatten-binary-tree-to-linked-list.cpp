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
    // vector<int> pre;
    TreeNode* finalRoot = NULL;
    TreeNode* temp = NULL;
    // void help(TreeNode* root)
    // {
    //     if(root==NULL)
    //     {
    //         return;
    //     }
    //     pre.push_back(root->val);
    //     help(root->left);
    //     help(root->right);
    // }
    void helper(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        TreeNode* n = new TreeNode(root->val);
        n->left = NULL;
        n->right = NULL;
        if(finalRoot==NULL)
        {
            finalRoot=n;
            temp = n;
        }
        else
        {
            temp->right = n;
            temp = n;
        }
        helper(root->left);
        helper(root->right);
    }
    void flatten(TreeNode* root) {
        if(root==NULL)
        {
            return;
        }
        // help(root);
        helper(root);
        *root = *finalRoot;
    }
};