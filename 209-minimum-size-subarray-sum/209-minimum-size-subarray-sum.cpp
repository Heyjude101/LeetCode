class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i =0; int j=0;
        int sum = nums[0];
        int ans = INT_MAX;
        while(i < nums.size() && j < nums.size()){
            cout<<sum<<" ";
            if(sum<target){
                j++;
                if(j < nums.size())
                sum += nums[j];
            }
            else{
                // ans = min(ans , j-i);
                ans = min(ans , j-i+1);
                sum -= nums[i];
                i++;
            }
        }
        if(ans == INT_MAX){
            return 0;
        }
        return ans;
        
    }
};