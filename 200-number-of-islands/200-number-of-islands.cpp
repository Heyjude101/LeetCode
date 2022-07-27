class Solution {
public:
    void dfs(vector<vector<char>> &grid , int i , int j , vector<vector<int>> &visited){
        //out of bound condition
        if(i <0 or j< 0 or i >= grid.size() or j >= grid[0].size() or visited[i][j] == 1 or grid[i][j] == '0'){
            return;
        }
        visited[i][j] = 1;
        dfs(grid , i+1 , j , visited);
        dfs(grid , i-1 , j , visited);
        dfs(grid , i , j-1 , visited);
        dfs(grid , i , j+1 , visited);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int sum  =0;
        vector<vector<int>> visited(grid.size()+1, vector<int>(grid[0].size() ,-1));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(visited[i][j] == -1 && grid[i][j] == '1'){
                    dfs(grid , i , j , visited);
                    sum += 1;
                }
            }
        }
        return sum;
    }
};