class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        //basically find the longest subarray with sum equal to totalSum - x
        
        if(nums.size() ==1){
            if(x == nums[0]){
                return 1;
            }
            else{
                return -1;
            }
        }
        
        
        int i=0;
        int j=0;
        int totalSum =0;
        //find the total sum
        for(auto it: nums){
            totalSum += it;
        }
        //get our target that we need
        int currSum = nums[0];
        int target = totalSum -x;
        int size = -1;
        while(i < nums.size() and j < nums.size()){
            if(currSum < target){
                j++;
                if(j < nums.size())
                currSum += nums[j];
            }
            else if(currSum == target){
                size = max(size , j-i+1);
                currSum -= nums[i];
                i++;
                j++;
                if(j < nums.size())
                currSum += nums[j];
            }
            else{
                //contract from left
                currSum -= nums[i];
                i++;
            }
            
        }
        if(size == -1){
            return size;
        }
        return nums.size() - size;
    }
};