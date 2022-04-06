class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //two pointers
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            int curSum = nums[i] + nums[j];
            if(curSum == target ){
                return {i+1 , j+1};                
            }
            else if(curSum < target){
                i++;
            }
            else{
                j--;
            }
        }
        return {};
    }
};
// //fast io
// static bool     _foo = ios::sync_with_stdio(false);
// static ostream* _bar = cin.tie(NULL);