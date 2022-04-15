auto speedup=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int i = row -1;
        int j =0;
        while(i>=0 && j<col){
            if(target == matrix[i][j]){
                return true;
            }
            else if(target < matrix[i][j]){
                --i;
            }
            else{
                ++j;
            }
        }
        return false; 
    }
};