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
    int maxim = INT_MIN;
    int f(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left = f(root->left);
        if(left<0) left = 0;
        int right = f(root->right);
        if(right<0) right = 0;
        maxim = max(left + right + root->val , maxim);
        return root->val + max(left, right); 
    }
    
    int maxPathSum(TreeNode* root) {
        f(root);
        return maxim;
    }
};