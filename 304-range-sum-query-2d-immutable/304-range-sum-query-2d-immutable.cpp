class NumMatrix {
public:
    vector<vector<int>> myMat;
    NumMatrix(vector<vector<int>>& matrix) {
        myMat = vector<vector<int>>(matrix.size() , vector<int>(matrix[0].size()));
        for(int i=0;i<matrix.size();i++){
            int summ = 0;
            for(int j=0;j<matrix[0].size();j++){
                summ += matrix[i][j];
                myMat[i][j] = summ;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        int sum =0;
        for(int i=row1;i<=row2;i++){
                sum += myMat[i][col2];
                if(col1>0){
                    sum -= myMat[i][col1-1];
                }
            }
        return sum;
        }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */