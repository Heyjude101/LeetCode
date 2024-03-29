class Solution {
public:
    int climbStairs(int n){
        vector<int> dp(50 , -1);
        return climbStairs(dp , n);
    }
    int climbStairs(vector<int> &dp , int n) {
        if(n==1) return 1;
        if(n==0) return 1;
        if(dp[n] != -1) {
            return dp[n];
        }
        return dp[n] = climbStairs(dp,n-1) + climbStairs(dp,n-2);
    }
};


// class Solution {
// public:
//      int f(int n){
//         int prev2 = 1;
//         int prev =2;
//         int ans = n;
//         for(int i=3; i<=n; i++){
//             ans = prev + prev2;
//             prev2 = prev;
//             prev = ans;
            
//         }
//         return ans;
//     }
//     // int f(int n, array<int , 46> &dp){
//     //     dp[1] = 1;
//     //     dp[2] =2;
//     //     for(int i=3; i<=n; i++){
//     //         dp[i] = dp[i-1] + dp[i-2];
//     //     }
//     //     return dp[n];
//     // }
//     // int f(int n , array<int , 46> &dp){
//     //     if(n<=2) return n;
//     //     if(dp[n] != -1) return dp[n];
//     //     return dp[n] = f(n-1 , dp) + f(n-2 , dp);
//     // }
//     int climbStairs(int n) {
//         // array<int , 46> dp;
//         // dp.fill(-1);
//         // return f(n , dp);
//         return f(n);
//     }
// };