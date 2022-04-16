class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int first = nums[0];
        while(left<=right){
            int mid = left + (right - left)/2;
            int value = nums[mid];
            if(value == target) return mid;
            //know your location in the array
            bool value_check = value >= first;
            bool target_check = target >= first;
            if(value_check == target_check) {
                if(target < value){
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            }
            else{
                if(target_check){
                    right = mid -1;
                }
                else{
                    left = mid + 1;
                }
            }
        }
        
        return -1;
        
    }
};