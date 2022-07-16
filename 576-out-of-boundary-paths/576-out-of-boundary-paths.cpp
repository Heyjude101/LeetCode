class Solution {
public:
    int countWays(int m , int  n , int moves , int startR , int startC , vector<vector<vector<int>>> &dp){
        if(startR<0 or startC<0 or startR>m or startC>n){
            return 1;
        }
        if(moves == 0){
            return 0;
        }
        if(dp[moves][startR][startC] != -1){
            return dp[moves][startR][startC];
        }
        int up = countWays(m , n , moves-1 , startR-1 , startC , dp)%1000000007;
        int down = countWays(m , n , moves-1 , startR+1 , startC , dp)%1000000007;
        int left = countWays(m , n , moves-1 , startR , startC-1 , dp)%1000000007;
        int right = countWays(m , n , moves-1 , startR , startC+1 , dp)%1000000007;
        return dp[moves][startR][startC] = ((up+down)%1000000007+(left+right)%1000000007)%1000000007;
    } 
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp(51 , vector<vector<int>>(51 , vector<int>(51 , -1)));
        return countWays(m-1 , n-1 , maxMove, startRow , startColumn , dp)%1000000007;
    }
};