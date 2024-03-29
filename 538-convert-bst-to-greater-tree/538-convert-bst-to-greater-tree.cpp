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
auto speedup=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    int sum = 0;
    TreeNode* convertBST(TreeNode* root) {
        if(root){
        convertBST(root->right);
        sum =  sum+ root->val;
        root->val = sum;
        convertBST(root->left);
        }
        return root;
    }
};