class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i=0;i<row; i++){
            if(binary_search(matrix[i].begin() , matrix[i].end() , target)){
                return true;
            }
        }
        return false;
        
    }
};