class Solution {
public:
    int f(int n , array<int , 46> &dp){
        if(n<=2) return n;
        if(dp[n] != -1) return dp[n];
        return dp[n] = f(n-1 , dp) + f(n-2 , dp);
    }
    int climbStairs(int n) {
        array<int , 46> dp;
        dp.fill(-1);
        return f(n , dp);
        
    }
};