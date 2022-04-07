static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int ans  = nums[0];
        for(auto i: nums){
            sum += i;
            if(sum>ans) ans = sum;
            if(sum<0) sum =0;
        }
        return ans;
    }
};