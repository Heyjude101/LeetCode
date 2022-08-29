class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        // if(nums.size() ==1){
        //     return nums;
        // }
        
        vector<int> ans;
        for(int i =0;i<nums.size();i++){
            int  curr = nums[i];
             while(!dq.empty() && i-dq.front() >= k){
                dq.pop_front();
            }
            //pop till required from back
            while(!dq.empty() && curr >  nums[dq.back()]){
                dq.pop_back();
            }
            //remove outdated values
           
            dq.push_back(i);
            //when to push the answer : -> when i >= k-1
            if(i >= k-1){
                ans.push_back(nums[dq.front()]);
            }
        }
        
        return ans;
        
    }
};