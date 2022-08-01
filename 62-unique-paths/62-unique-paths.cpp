class Solution {
public:
    int arr[105][105];
    int solve(int m , int  n){
        //base case
        if(m < 0 or n< 0){
            return 0;
        }
        if(m ==0 && n ==0){
            return 1;
        }
        if(arr[m][n] != -1){
            return arr[m][n];
        }
        int right = solve(m , n-1);
        int bottom = solve(m- 1 , n);
        return arr[m][n] = (right + bottom); 
    }
    int uniquePaths(int m, int n) {
        memset(arr , -1 , sizeof(arr));
        return solve(m-1 , n-1);
        
    } 
};