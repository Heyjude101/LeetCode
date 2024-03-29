class Solution {
public:
    //Now optimize space to O(1)
     int f(int n){
        int prev = 1;
        int prev2 = 0;
         int ans = n;
        for(int i=2;i<=n;i++){
            // dp.push_back(dp[i-1] + dp[i-2]);
            ans = prev + prev2;
            prev2 = prev;
            prev = ans;
        }
        return ans;
    }
    
    
    
    
    
    
    //Now convert to tabulated form
    // int f(int n ,vector<int> &dp){
    //     dp.push_back(0);
    //     dp.push_back(1);
    //     for(int i=2;i<=n;i++){
    //         dp.push_back(dp[i-1] + dp[i-2]);
    //     }
    //     return dp[n];
    // }
    

    // int f(int n , vector<int> &dp){
    //     //base case
    //     if(n==0) return 0;
    //     if(n ==1) return 1;
    //     if(dp[n] != -1) return dp[n];
    //     return dp[n] = f(n-1 , dp) + f(n-2 , dp);   
    // }
    int fib(int n) {
        //recursive dp technique
        // vector<int> dp;
        return f(n);
        // if(n==0) return 0;
        // if(n==1) return 1;
        // return dp[n] = ib(n-1) + fib(n-2);  
    }
};