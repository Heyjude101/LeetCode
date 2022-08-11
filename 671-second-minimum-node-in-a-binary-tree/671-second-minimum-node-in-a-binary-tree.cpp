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
    set<int> s;
    void inorder(TreeNode* root){
        if(root == NULL){
            return ;
        }
        inorder(root->left);
        s.insert(root->val);
        inorder(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        inorder(root);
        int ans;
        int first, second;
        int c = 0;
        if(s.size() == 1){
            return -1;
        }
        else{
        for(auto it: s){
            c++;
            if(c==2){
                second = it;
                break;
            }    
        }
        }
        
        
        return second;
    }
};