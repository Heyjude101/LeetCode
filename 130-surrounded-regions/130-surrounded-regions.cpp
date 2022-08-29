class Solution {
public:
    void dfs(vector<vector<char>> &board , int i , int j , int r  , int  c){
        //simple boundary conditions
        if(i < 0 or i>=r or j < 0 or j>=c){
            return;
        }
        //if it meets 'X'
        if(board[i][j] != 'O'){
            return;
        }
        // if(i !=0 and j != 0 and i != r-1 and j != c-1){
        board[i][j] = '*';
        // }
        dfs(board , i , j-1 , r , c);
        dfs(board , i , j+1 , r , c);
        dfs(board , i+1 , j , r , c);
        dfs(board , i-1 , j , r , c);
    }
    void solve(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();
        
        //start dfs from boundary
        //top row
        for(int i=0;i<col;i++){
            if(board[0][i] == 'O')
            dfs(board , 0 , i , row , col);
        }
        //right col
        for(int i=0;i<row;i++){
            if(board[i][col-1] == 'O')
            dfs(board , i , col-1 , row , col);
        }
        //bottom row
        for(int i=0;i<col;i++){
            if(board[row-1][i] == 'O')
            dfs(board , row-1 , i , row , col);
        }
        //left col
        for(int i=0;i<row;i++){
            if(board[i][0] == 'O')
            dfs(board , i , 0 , row , col);
        }
        
        for(int i=0;i<row;i++){
            for(int j =0;j<col;j++){
                if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
                if(board[i][j] == '*'){
                    board[i][j] = 'O';
                }
            }
        }
    }
};