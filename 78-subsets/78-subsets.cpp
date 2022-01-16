class Solution {
public:
    void subset(int index , vector<int> &nums , vector<int> &ds , vector<vector<int>> &ans){
        //Base case will be reached when index exceeds n
        if(index == nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[index]);
        subset(index+1 , nums , ds, ans);
        ds.pop_back();
        subset(index+1 , nums , ds  , ans);
    }
    
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        subset(0, nums , ds , ans);
        return ans;  
    }
};