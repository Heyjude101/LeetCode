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
    bool check(TreeNode* leftT , TreeNode* rightT){
        if(leftT == NULL && rightT!= NULL) return false;
        if(leftT != NULL && rightT== NULL) return false;
        if(leftT == NULL && rightT==NULL) return true;
        if(leftT->val != rightT->val) return false;
        return check(leftT->left,  rightT->right) && check(leftT->right , rightT->left);
        

    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return check(root->left , root->right);       
    }
};