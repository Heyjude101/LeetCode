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
    TreeNode *firstNode = NULL;
    TreeNode *secondNode = NULL;
    TreeNode *prev;
    void inorder(TreeNode* root){
        if(root == NULL) return;
        inorder(root->left);
        //code here
        if(firstNode == NULL && root->val < prev->val){
            firstNode = prev;
        }
        if(firstNode != NULL && root->val < prev->val){
            secondNode = root;
        }
        prev = root;
        inorder(root->right);
        
    }
    void recoverTree(TreeNode* root) {
        prev = new TreeNode(INT_MIN);
        inorder(root);
        swap(firstNode->val , secondNode->val);
    }
};