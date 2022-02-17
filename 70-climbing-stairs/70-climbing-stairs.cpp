class Solution {
public:
    int f(int n, array<int , 46> &dp){
        dp[1] = 1;
        dp[2] =2;
        for(int i=3; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
    // int f(int n , array<int , 46> &dp){
    //     if(n<=2) return n;
    //     if(dp[n] != -1) return dp[n];
    //     return dp[n] = f(n-1 , dp) + f(n-2 , dp);
    // }
    int climbStairs(int n) {
        array<int , 46> dp;
        dp.fill(-1);
        return f(n , dp);
        
    }
};