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
    void inorder(TreeNode* &temp , TreeNode* root){
        if(root == NULL){
            return;
        }
        inorder(temp, root->left);
        temp->right = new TreeNode(root->val);
        temp = temp->right;
        inorder(temp , root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* temp = new TreeNode();
        TreeNode* res = temp;
        inorder(temp, root);
        return res->right;
    }
};