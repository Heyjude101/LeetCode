class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int sum  =nums[0];
        ans.push_back(nums.at(0));
        cout<<ans[0];
        for(int i=1;i<nums.size();i++){  
            sum = ans[i-1] + nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};