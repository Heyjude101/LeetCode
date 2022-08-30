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
    int heigh(TreeNode* root){
        if(root ==NULL){
            return 0;
        }
        int left = heigh(root->left);
        int right = heigh(root->right);
        return 1 + max(left , right);
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        int diff = abs(heigh(root->left) - heigh(root->right));
        if(diff >1){
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
        
        
    }
};