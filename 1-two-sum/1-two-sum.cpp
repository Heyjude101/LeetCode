class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        int flag=0;
        vector<int> ans;
        for(int i=0;i<len; i++){
            if(flag==1){break;}
            for(int j=i+1;j<len;j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    flag=1;
                    break;
                }
            }
            
        }
        return ans;
        
        
    }
};