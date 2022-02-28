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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //here we check for structure mostly
        if(p == NULL && q!=NULL) return false;
        if(p != NULL && q==NULL) return false;
        if(p==NULL && q==NULL) return true;
        //isSameTree is a function that returns whether the two trees gives to it are identical or not!
       if(isSameTree(p->left , q->left) && isSameTree(p->right , q->right) && p->val == q->val){
           return true;
       }
        else{
            return false;
        }
    }
};