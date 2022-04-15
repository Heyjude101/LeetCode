class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = grid.size();
        int col =  grid[0].size();
        int x = row-1;
        int y = 0;
        int count =0;
        while(x>=0 && y<col){
            if(grid[x][y] <0){
                count += col-y;
                x--;
            }
            else {
                y++;   
            }
        }
        return count;
    }
};