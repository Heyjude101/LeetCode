class Solution {
public:
void rotate(vector<vector<int>>& matrix) {
//transpose of the matrix
for(int i=0;i<matrix.size();i++){
for(int j=i;j<matrix[0].size();j++){
swap(matrix[i][j] , matrix[j][i]);
}
}
// reverse the rows
for(int i=0; i<matrix.size();i++){
int x=0; int y = matrix[0].size()-1;
while(x < y){
swap(matrix[i][x] , matrix[i][y]);
x++;
y--;
}
}
}
};