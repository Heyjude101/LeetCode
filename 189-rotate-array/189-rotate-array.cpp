class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int curr  = k%nums.size();
        reverse(nums.begin(),nums.begin() + nums.size()-curr);
        reverse(nums.begin()+nums.size()-curr , nums.begin() +nums.size());
        reverse(nums.begin(), nums.begin() + nums.size());
        
    }
};