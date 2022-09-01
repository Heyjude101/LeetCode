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
    int ans = 0;
    void f(TreeNode* root , int maxSoFar){
        if(root== NULL){
            return;
        }
        if(root->val >= maxSoFar){
            ans++;
            maxSoFar = root->val;
        }
        
        f(root->left , maxSoFar);
        f(root->right , maxSoFar); 
    }
    int goodNodes(TreeNode* root) {
        f(root, root->val);
        
        return ans;
        
        
        
    }
};