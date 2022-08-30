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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        int sum=0;
        int ans;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            sum = 0;
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }
            ans = sum;
        }
        
        return ans;
        
        
        
        
        
        
    }
};