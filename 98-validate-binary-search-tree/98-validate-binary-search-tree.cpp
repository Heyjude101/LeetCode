class Solution {
public:
//     bool check(TreeNode* root){
        
//     }
    void preorder(TreeNode* root , vector<int> &pre){
        if(root == NULL){
            return;
        }
        preorder(root->left , pre);
        pre.push_back(root->val); 
        preorder(root->right , pre);

    }
    
    bool check(vector<int> &v){
        bool ret  = true;
        int size = v.size();
        for(int i=1;i<size;i++){
            if(v[i] <= v[i-1]){
                ret = false;
            }
        }
        
        return ret;
    }
    bool isValidBST(TreeNode* root) {
        //find preorder traversal first
        //then check if they are sorted or not
        vector<int> pre;
        preorder(root , pre);
        for(auto it: pre){
            cout<<it<<" ";
        }
        return check(pre);
        
    }
};