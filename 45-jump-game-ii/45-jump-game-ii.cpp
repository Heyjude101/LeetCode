class Solution {
public:
    int dp[100000];
    int solve(vector<int> &nums , int i){
        //base case
        if(i>= nums.size()-1){
            return 0;
        }
        if(dp[i] != -1){
            return dp[i];
        }
        long long mini = INT_MAX;
        for(int k=1;k<=nums[i];k++){
            mini = min(mini , (long long)1+solve(nums , i + k));
        }
        
        return dp[i] = mini;
        
        
    }
    int jump(vector<int>& nums) {
        memset(dp , -1 , sizeof(dp));
        if(nums.size() ==1) return 0;
        return solve(nums , 0);   
    }
};