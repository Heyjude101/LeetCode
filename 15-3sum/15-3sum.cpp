class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //2 sum modified approach
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());
        if(nums.size()>0 && nums[0]>0) return ans;
        int size = nums.size();
        for(int  i =0;i<size-1; i++){
            if(i>0 and nums[i] == nums[i-1]){
                continue;
            }
            int target = -1 * nums[i];
            // if(target<0) return ans;
            if(nums[i] > 0) return ans;
            int start = i+1;
            int end = size -1;  
            while(start < end){
                int curSum = nums[start] + nums[end];
                if(curSum < target){
                    start++;
                }
                else if(curSum > target){
                    end--;
                }
                else{
                    vector<int> v = {nums[i] , nums[start] , nums[end]};
                    ans.push_back(v);
                    while(start< end and nums[start] == v[1]) start++;
                    while(start < end and nums[end] == v[2]) end--;
                }
            }
        }
        
        return ans;
    }
};

static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);