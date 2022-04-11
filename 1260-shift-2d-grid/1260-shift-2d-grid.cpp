class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r = grid.size();
        int c = grid[0].size();
        int times = k % (r*c);
        vector<int> ans;
        //flatten the matrix
        for(auto it: grid){
            for(auto i: it){
                ans.push_back(i);
            }
        }
        
        //reverse technique to roll an array
        reverse(ans.begin() , ans.end());
        reverse(ans.begin() , ans.begin()+times);
        reverse(ans.begin()+times , ans.end());
        int q=0;
        
        for(int i=0;i<r;i++){
            for(int j =0; j<c;j++){
             grid[i][j] = ans[q++];   
            }
        }
        return grid;
    }
};