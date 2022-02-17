class Solution {
public:
    int f(int n , vector<int> &dp){
        //base case
        if(n==0) return 0;
        if(n ==1) return 1;
        if(dp[n] != -1) return dp[n];
        return dp[n] = f(n-1 , dp) + f(n-2 , dp);   
    }
    int fib(int n) {
        //recursive dp technique
        vector<int> dp(n+1 ,-1);
        return f(n , dp);
        // if(n==0) return 0;
        // if(n==1) return 1;
        // return dp[n] = ib(n-1) + fib(n-2);  
    }
};