static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int rows  = board.size();
        int cols = board[0].size();
        for(int i = 0; i<rows; i++){
            for(int j = 0; j<cols; j++){
                int temp = 0;
                //above it but make sure it exists first
                if(i-1>=0 && ((board[i-1][j])%10) == 1){
                    temp++;
                }
                //below it
                if(i+1< rows && ((board[i+1][j])%10) == 1){
                    temp++;
                }
                //left of it
                if(j-1>=0 && ((board[i][j-1])%10) ==1){
                    temp++;
                }
                //right of it
                if(j+1 < cols && ((board[i][j+1])%10) == 1){
                    temp++;
                }
                //upperleft diagonal
                if(i-1>=0 && j-1>=0 && ((board[i-1][j-1])%10) == 1){
                    temp++;
                }
                //lower left diagonal
                if(i+1<rows && j-1>=0 && ((board[i+1][j-1])%10) == 1){
                    temp++;
                }
                //lower right diagonal
                if(i+1<rows && j+1<cols && ((board[i+1][j+1])%10) == 1){
                    temp++;
                }
                //upper right diagonal
                if(i-1>=0 && j+1<cols && ((board[i-1][j+1])%10) == 1){
                    temp++;
                }
                //checking with temp value
                if(board[i][j] == 1){
                    if(temp <= 1) board[i][j] = board[i][j] + 10;
                    else if(temp >= 4) board[i][j] = board[i][j] + 10;
                }
                else{
                    if(temp == 3) board[i][j] = board[i][j] + 10;  
                }
            }
        }
        //changing 11 to 0 and 10 to 1 
        //2nd pass
        for(int i=0;i<rows;i++){
            for(int j =0;j<cols;j++){
                if(board[i][j] == 11){
                    board[i][j] =0;
                }
                if(board[i][j] == 10){
                    board[i][j] = 1;
                }
            }
        }
        
    }
};