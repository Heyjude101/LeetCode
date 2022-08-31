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
    struct ele{
        TreeNode* node;
        int HD;
        int VD;
    };
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        map<int, vector<tuple<int , int , int>>> mymap;
        queue<ele> q;
        q.push({root,0 , 0});
        while(!q.empty()){
            ele front = q.front();
            q.pop();
            int currentHD = front.HD;
            int currentVD = front.VD;
            TreeNode* currentNode = front.node;
            
            mymap[currentHD].push_back(make_tuple(currentVD,currentHD,currentNode->val));
            if(currentNode->left !=NULL){
                q.push({currentNode->left, currentHD-1 , currentVD+1});
            }
            if(currentNode->right != NULL){
                q.push({currentNode->right, currentHD+1 , currentVD+1});
            }
        }
        for(auto it: mymap){
            vector<tuple<int,int , int>> smallAns = it.second;
            sort(smallAns.begin() , smallAns.end());
            
            
            // for(auto i:mp)
            // {
            //     sort(i.second,i.second);
            //     w[i.first].push_back(i.second);
            // }
            // cout<<get<0>(smallAns)<<" "<<get<1>(smallAns)<<" "<<get<2>(smallAns);
            vector<int> temp;
            
            for(auto it: smallAns){
                int x , y , z;
                tie(x, y, z) = it;
                temp.push_back(z);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};