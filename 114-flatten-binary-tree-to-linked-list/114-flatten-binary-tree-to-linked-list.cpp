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
        if(root==NULL || (root->left==NULL && root->right==NULL)) return;
        
        if(root->left != NULL){
            flatten(root->left); 
			//store right subtree in temp variable and attach left subtree in place of right subtree
            TreeNode* temp = root->right; 
            root->right = root->left;
            root->left = NULL;
			
            TreeNode* tail = root->right;
            while(tail->right != NULL){
                tail = tail->right;
            }
            
            tail->right = temp; //attaching temp(old root->right) to the tail of root->right(old root->left)
        }
        flatten(root->right);
   }
};