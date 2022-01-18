class Solution {
public:
    void perm(vector<int> &nums ,  vector<int> &ds , vector<vector<int>> &ans , int freq[]){
        //base case
        if(nums.size() == ds.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0; i<nums.size();i++){
            if(freq[i] == 0){
            ds.push_back(nums[i]);
            freq[i]=1;
            perm(nums, ds, ans, freq);     
            freq[i]=0;
            ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++){
            freq[i] = 0;
        }
        perm(nums , ds,  ans, freq);
        return ans;
        
    }
};