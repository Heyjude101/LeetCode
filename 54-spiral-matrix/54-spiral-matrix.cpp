static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int diff = row - col;
        int c = col-1;
        int r = 0;
        //orient: 1 (down, left)
        //orient: 2 (up, right)
        int orient = 1;
        vector<int> ans;
        //set the first row
        for(int i=0;i<col;i++){
            ans.push_back(matrix[0][i]);
        }
        if(row == 1) return ans;
        if(col ==1){
            for(int i =1;i<row;i++){
                ans.push_back(matrix[i][0]);
            }
            return ans;
        }
        int count = col;
        for(int i= row-1;i>=1;i--){
            if(orient ==1){
                int down = i;
                while(down-->0 && count< row*col){
                    r++;
                    ans.push_back(matrix[r][c]);
                    count++;
                }
                int left = i - diff;
                while(left-->0 && count< row*col){
                    c--;
                    ans.push_back(matrix[r][c]);
                    count++;
                }
                orient = 2;    
            }
            else{
                int up = i;
                while(up-->0 && count< row*col){
                    r--;
                    ans.push_back(matrix[r][c]);
                    count++;
                }
                int right = i - diff;
                while(right-->0 && count< row*col){
                    c++;
                    ans.push_back(matrix[r][c]);
                    count++;
                }
                orient = 1;
            }
        }
        
        return ans;
    }
};