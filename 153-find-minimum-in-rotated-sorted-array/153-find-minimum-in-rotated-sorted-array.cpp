class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right  = nums.size()-1;
        int last = nums[right];
        int pos_ans =-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            int value = nums[mid];
            if(value > last){
                left = mid +1;
            }
            else{
                pos_ans = value;
                right = mid -1;                
            } 
        }
        
        return pos_ans;
        
        
    }
};