class Solution {
    
public:
    bool isSafe(int row , int col , vector<string> board , int n){
        int d_col = col;
        int d_row = row;
        //check upper diagonal
        while(row>=0 && col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row--;
            col--;
        }
        
        row = d_row;
        col = d_col;
        
        //check left
        while(col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            col--;
        }
        row = d_row;
        col = d_col;
        //check bottom diagonal
        while(row<n && col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row++;
            col--;       
        }
        return true;
    }
    
public:
    void solve(int col, int n, vector<vector<string>> &ans , vector<string> &board){
        if(col == n){
            ans.push_back(board);
            return;
        }
        for(int row=0; row<n;row++){
            if(isSafe(row, col, board, n)){
                board[row][col] ='Q';
                solve(col+1 , n , ans , board);
                board[row][col]= '.';  
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board;
        vector<vector<string>> ans;
        string s(n, '.');
        for(int i=0;i<n;i++){
            board.push_back(s);
        }
        solve(0, n , ans , board);
        return ans;
        
    }
};