class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i =matrix.size() -1;
        int j = 0;
        while(i>=0 && j <matrix[0].size()){
            if(matrix[i][j] == target){
                return true;
            }
            else if(matrix[i][j] < target){
                j++;    
            }
            else{
                i--;
            }
        }
        
        return false;
        
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //         if(matrix[i][j] == target){
        //             return true;
        //         }
        //     }
        // } 
        // return false;
        
        // for(int i=0;i<row; i++){
        //     if(binary_search(matrix[i].begin() , matrix[i].end() , target)){
        //         return true;
        //     }
        // }
        // return false;
        
    }
};