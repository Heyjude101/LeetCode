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
    int i=0;
    int countNodes(TreeNode* root) {
        
        if(root==NULL){
           return 0;
        }
        int leftc = countNodes(root->left);
        int rightc = countNodes(root->right);
        return 1 + leftc + rightc;
        // return 1 + countNodes(root->left) + countNodes(root->right);  
    }
};