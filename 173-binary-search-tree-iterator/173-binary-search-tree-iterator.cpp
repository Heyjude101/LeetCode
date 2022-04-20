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
class BSTIterator {
public:
    vector<int> arr;
    int i=0;
    void inorder(TreeNode* root){
        if(root == NULL) return;
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
    }
    BSTIterator(TreeNode* root) {
        inorder(root);
        //pushing back -1 also so that we can know help with the hasNext fuction.
        arr.push_back(-1);
    }
    
    int next() {
        return arr[i++];
    }
    
    bool hasNext() {
        if(arr[i] == -1){
            return false;
        }
        else{
            return true;
        }   
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */