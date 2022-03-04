class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //one liner STL
        fill(remove(nums.begin() , nums.end() , 0) , nums.end() , 0);
        // int len = nums.size();
        // int pos = 0;
        // for(auto it: nums){
        //     if(it != 0) {
        //         nums[pos] = it;
        //         pos++;
        //     }
        // }
        // for(int i=pos;i<len;i++){
        //     nums[i] = 0;
        // }
//         for(int i=0;i<len-1;i++){
//             for(int j=i;j<len-1;j++){
//             if(nums[i] == 0 && nums[j+1]!=0){
//                 swap(nums[i] , nums[j+1]);
//             }
//             else{
                
//             }
//             }
//         }
        }
};