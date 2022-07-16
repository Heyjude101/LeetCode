class Solution {
public:
    int mod = 1e9+7;
    int dp[51][51][51];
    int countWays(int m , int  n , int moves , int startR , int startC){
        if(startR<0 or startC<0 or startR>m or startC>n){
            return 1;
        }
        if(moves == 0){
            return 0;
        }
        if(dp[moves][startR][startC] != -1){
            return dp[moves][startR][startC];
        }
        int up = countWays(m , n , moves-1 , startR-1 , startC);
        int down = countWays(m , n , moves-1 , startR+1 , startC);
        int left = countWays(m , n , moves-1 , startR , startC-1);
        int right = countWays(m , n , moves-1 , startR , startC+1);
        return dp[moves][startR][startC] = ((up%mod + down%mod)%mod + (left%mod + right%mod)%mod)%mod;
    } 
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp , -1 , sizeof(dp));
        return countWays(m-1 , n-1 , maxMove, startRow , startColumn)%1000000007;
    }
};