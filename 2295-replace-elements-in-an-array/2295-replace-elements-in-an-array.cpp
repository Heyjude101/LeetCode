class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int , int> mp;
        int x = 0;
        for(auto it: nums){
            mp[it] = x++;
        }
        
        //run operations
        for(auto it: operations){
            nums[mp[it[0]]] = it[1];
            mp[it[1]] = mp[it[0]];
        }
        return nums;
    }
};