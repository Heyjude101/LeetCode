class Solution {
public:
    int box(vector<int> &nums , int n){
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            ans =  ans + nums[i]/n;
            if(nums[i]%n!=0) ans++;
        }
        return ans;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin() , nums.end());
        int ans = high;
        while(low<=high){
            int mid = (low + high)/2;
            if(box(nums , mid)<=threshold){
                ans =  mid;
                high = mid -1;  
            }
            else{
                low  = mid + 1;
            }  
        }  
        return ans;
    }
};