class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //two pointers
        vector<int> ans;
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            int curSum = nums[i] + nums[j];
            if(curSum < target){
                i++;
            }
            else if(curSum > target){
                j--;
            }
            else{
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
        }
        return ans;
    }
};
static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);