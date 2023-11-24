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
vector<string> ans;
    void path(TreeNode*root,string s){
        if(root==NULL)return;
        if(s.empty()){s+=(to_string(root->val));}
        else {s=s+"->"+(to_string(root->val));}
        if(!root->left && !root->right){
            ans.push_back(s);
        }
        path(root->left,s);
        path(root->right,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        path(root,"");
        return  ans;

    }
};