class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            nums[i] = sum;
        }
        //first check
        if(nums[nums.size()-1] - nums[0] == 0){
            return 0;
        }
      
        
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i] == (nums[nums.size()-1] - nums[i-1])){
                return i;
            }
        }
          //last element check
        if(nums[nums.size()-2] == 0){
            return nums.size()-1;
        }
        
        return -1;
        
        
    }
};