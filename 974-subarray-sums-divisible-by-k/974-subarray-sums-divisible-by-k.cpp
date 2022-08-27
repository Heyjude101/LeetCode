class Solution {
public:
    int ans = 0;
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        int curr = 0;
        unordered_map<int , int> mp;
        mp[0] =1;
        for(auto it: nums){
            curr = (curr +  (it%k + k))%k;
            if(mp.count(curr)){
                ans += mp[curr];
            }
            mp[curr]++;
        }
        
        return ans;
        
    }
};