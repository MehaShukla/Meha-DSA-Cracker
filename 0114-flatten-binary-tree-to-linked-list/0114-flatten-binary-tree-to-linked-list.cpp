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
    void flatten(TreeNode* root) {
        TreeNode* head=root;
        while(head!=NULL)
        {
            if(head->left!=NULL)
            {
                TreeNode* pred=head->left;
            while(pred->right!=NULL)
            {
                pred=pred->right;
            }
            pred->right=head->right;
            head->right=head->left;
            }
                head=head->right;
        }
        head=root;
        while(head!=NULL)
        {
            head->left=NULL;
            head=head->right;
        }
    }
};