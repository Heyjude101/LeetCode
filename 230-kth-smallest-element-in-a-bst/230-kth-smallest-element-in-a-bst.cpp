auto speedup=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
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
    int ans =0;
    bool f = false;
    void inorder(TreeNode* root , int &k){
        if(root == NULL or  f == true){
            return;
        }
        inorder(root->left , k);
        if(--k==0) {
            ans = root->val;
            f = true;
        }
        inorder(root->right , k);   
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root , k);
        return ans;
    }
};