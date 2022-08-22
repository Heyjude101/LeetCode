class Solution {
public:
    int dp[205][205];
    int helper(vector<vector<int>> &grid , int i  , int j){
        //base cases
        //out of bound case
        if(i >= grid.size() or j >= grid[0].size()){
            return 1e9;
        }
        if(i == grid.size()-1 and j == grid[0].size() -1){
            return  grid[i][j];
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int down = grid[i][j] + helper(grid , i+1 , j);
        int right = grid[i][j] + helper(grid , i , j+1);
        return dp[i][j] =  min(down , right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp  , -1 , sizeof(dp));
        return helper(grid , 0 , 0);
        
    }
};