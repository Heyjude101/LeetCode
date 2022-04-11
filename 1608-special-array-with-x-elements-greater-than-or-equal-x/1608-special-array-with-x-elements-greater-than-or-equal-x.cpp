class Solution {
public:
    int specialArray(vector<int>& nums) {
        // sort(nums.begin() , nums.end());
        int size = nums.size();
        int count =0;
        for(int i=1;i<=size;i++){
            for(int j = 0; j<size;j++){
                if(nums[j] >= i){
                    count++;
                }
            }
            if(count == i) return count;
            
            count =0;
        }
        
        return -1;
        
    }
};