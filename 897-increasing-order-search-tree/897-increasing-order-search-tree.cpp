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
    TreeNode * headnew=NULL;
    TreeNode * tailnew=NULL;
    void helper(TreeNode * root)
    {if(root==NULL)
        return ;
     TreeNode *n=new TreeNode(root->val);
     n->left=NULL;
     n->right=NULL;
     helper(root->left);
     if(headnew==NULL)
     {
         headnew=n;
         tailnew=n;
     }
     else
     {
         tailnew->right=n;
         tailnew=n;
     }
      helper(root->right);
        
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL)
            return NULL;
        helper(root);
        *root=*headnew;
        return root;
    }
};