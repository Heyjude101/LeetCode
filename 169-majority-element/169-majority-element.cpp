class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr = nums[0];
        int c = 1;
        for(int i =1;i<nums.size();i++){
            if(nums[i] != curr){
                c--;
                if(c<=0) {
                    curr  = nums[i];
                    c=1;
                }
            }
            else{
                c++;
            }
        }
        return curr;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        //MOORE VOTING ALGO
        
        // int ans, count=1,cur = nums[0];
        // for(int i=1;i<nums.size();i++){
        //     if(cur == nums[i]){
        //         count++;
        //     }
        //     else{
        //         count--;
        //         if(count==0){ 
        //             cur = nums[i];
        //             count =1;
        //         }
        //     }
        // }
        // if(count>=1){
        // ans = cur;
        // }
        
        // SORT AND DISPLAY MIDDLE ELEMENT
        
//         sort(nums.begin(), nums.end());
//         int ans = nums[int(nums.size()/2)];
        
        
        
        
//         return ans;
        
    }
};