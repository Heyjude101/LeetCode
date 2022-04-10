class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       //find first position
        int l =0;
        int r = nums.size()-1;
        int first =-1;
        while(l<=r){
            //Integer overflow check
            int mid = l + (r-l)/2;
            if(nums[mid] == target){
                first = mid;
                r = mid -1;
            }
            else if(nums[mid] > target){
                r =  mid -1;
            }
            else{
                l = mid+1;
            }
        }
        //find last position
        l = 0;
        r = nums.size() -1;
        int last = -1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target){
                last  = mid;
                l= mid + 1;
            }
            else if(nums[mid] > target){
                r = mid -1;
            }
            else{
                l = mid + 1;
            }
        }
        return {first , last};
        
    }
};