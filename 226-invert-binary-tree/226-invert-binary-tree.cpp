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
    void helper(TreeNode* root){
        if(root!= NULL){
            swap(root->left , root->right);
            helper(root->left);
            helper(root->right);
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        
        helper(root);
        // if(root == NULL){
        //     return NULL;
        // }
        // swap(root->left , root->right);
        // root->left  = invertTree(root->left);
        // root->right = invertTree(root->right);
        // return root;
        return root;
    }
};