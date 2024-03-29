static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {   
        int rows = matrix.size(); int cols = matrix[0].size();
        int check = 1;
        //1st iteration
        for(int i=0;i<rows; i++){
            if(matrix[i][0] == 0) check = 0;
            for(int j=1; j<cols; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        //2nd iteration
        for(int i = rows -1; i>=0;i--){
            for(int j = cols-1; j>=1;j--){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] =0;
                }
            }
            if(check == 0) matrix[i][0] = 0;
        } 
    }
};