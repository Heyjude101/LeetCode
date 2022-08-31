class Solution {
public:
    //Altantic DFS function
    void a_dfs(vector<vector<int>> &heights , vector<vector<int>> &v2 , int i , int j){
        //out of bounds check
        if(i<0 or j<0 or i>= heights.size() or j>= heights[0].size()){
            return;
        }
        //if already it accessed and processed
        if(v2[i][j] == -1){
            return;
        }
        //set one here
        v2[i][j] = -1;
        //dfs to right
        if(j+1 < heights[0].size() && heights[i][j]  <= heights[i][j+1]){
            a_dfs(heights , v2, i , j+1);
        }
        //dfs to left
        if(j-1 >=0 && heights[i][j]  <= heights[i][j-1]){
            a_dfs(heights , v2, i , j-1);
        }
        //dfs to top
        if(i-1 >=0 && heights[i][j]  <= heights[i-1][j]){
            a_dfs(heights , v2, i-1 , j);
        }
        //dfs to bottom
        if(i+1 < heights.size() && heights[i][j]  <= heights[i+1][j]){
            a_dfs(heights , v2, i+1 , j);
        }
    }
    //Pacific DFS function
    void p_dfs(vector<vector<int>> &heights , vector<vector<int>> &v , int i , int j){
        //out of bounds check
        if(i<0 or j<0 or i>= heights.size() or j>= heights[0].size()){
            return;
        }
        //if already it is set to one
        if(v[i][j] == 1){
            return;
        }
        //set one here
        v[i][j] = 1;
        //dfs to right
        if(j+1 < heights[0].size() && heights[i][j]  <= heights[i][j+1]){
            p_dfs(heights , v, i , j+1);
        }
        //dfs to left
        if(j-1 >=0 && heights[i][j]  <= heights[i][j-1]){
            p_dfs(heights , v, i , j-1);
        }
        //dfs to top
        if(i-1 >=0 && heights[i][j]  <= heights[i-1][j]){
            p_dfs(heights , v, i-1 , j);
        }
        //dfs to bottom
        if(i+1 < heights.size() && heights[i][j]  <= heights[i+1][j]){
            p_dfs(heights , v, i+1 , j);
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size();
        int n = heights[0].size();
        vector<vector<int>> v(m , vector<int>(n , 10));
        vector<vector<int>> v2(m , vector<int>(n , 10));
        //run Pacific dfs on the top row
        for(int i=0;i<n;i++){
            if(v[0][i] != 1){
                p_dfs(heights , v , 0 , i);
            }
        }
        //run Pacific dfs on the left col
        for(int i=0;i<m;i++){
            if(v[i][0] != 1){
                p_dfs(heights , v , i , 0);
            }
        }
        //lets check how it looks for now
        // for(auto it: v){
        //     for(auto ite: it){
        //         cout<<ite<<" ";
        //     }
        //     cout<<"\n";
        // }
        
        //run atlantic dfs on right col
        for(int i=0;i<m;i++){
            if(v2[i][n-1] != -1){
                a_dfs(heights , v2 , i , n-1);
            }
        }
        //run Pacific dfs on the bottom row
        for(int i=0;i<n;i++){
            if(v2[m-1][i] != -1){
                a_dfs(heights , v2 , m-1 , i);
            }
        }
        
        // cout<<"\n\n\n\n";
        //lets check how it looks for now
        // for(auto it: v2){
        //     for(auto ite: it){
        //         cout<<ite<<" ";
        //     }
        //     cout<<"\n";
        // }
        
        vector<vector<int>> ans;
        for(int i=0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(v[i][j] + v2[i][j] == 0){
                    ans.push_back({i , j});
                }
            }
        }
        
        
        
        
        return ans;
        
        
        
    }
};