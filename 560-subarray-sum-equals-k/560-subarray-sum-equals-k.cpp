class Solution {
public:
    int ans = 0;
    unordered_map<int , int> mp;
    int curr = 0;
    int subarraySum(vector<int>& nums, int k) {
        mp[0] =1;
        for(int i=0;i<nums.size();i++){
            curr += nums[i];
            // if(nums[i] == k){
            //     ans++;
            // }
            if(mp.count(curr - k)){
                ans += mp[curr - k];
            }
            mp[curr]++;
        }
        
        return ans;
        
        
    }
};