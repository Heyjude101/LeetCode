class Solution {
public:
    int dp[1000000];
    bool solve(vector<int> &nums , int i){
        //base case
        if(i == nums.size() -1){
            return true;
        }
        else if(i > nums.size()-1){
            return false;
        }
        if(dp[i] != -1) return dp[i];
        bool ret = false;
        for(int k=1;k<=nums[i];k++){
            ret = solve(nums , i+k) or ret;
            if(ret == true){
                break;
            }
        }
        return dp[i] = ret;
    }
    bool canJump(vector<int>& nums) {
        memset(dp , -1 , sizeof(dp)); 
        if(solve(nums , 0)){
            return true;
        }
        return false;
        
    }
};