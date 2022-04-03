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
    void fun(TreeNode* root , int targetSum  , vector<vector<int>> &ans  , vector<int> currVec){
        if(root== NULL){
            return;
        }
        currVec.push_back(root->val);
        if(targetSum==root->val && root->left ==NULL && root->right == NULL){
            
            ans.push_back(currVec);
            return;
        }
        fun(root->left , targetSum - root->val , ans , currVec);
        fun(root->right , targetSum - root->val , ans , currVec);
        currVec.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> currVec;
        fun(root , targetSum , ans , currVec);
        return ans;
    }
};