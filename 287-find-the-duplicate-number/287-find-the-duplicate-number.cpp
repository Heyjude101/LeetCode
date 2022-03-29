class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        //meeting point find karo
        do{
            fast = nums[nums[fast]];
            slow = nums[slow];    
        }
        while(slow != fast);
        //ab slow ko start pe wapas bhej ke dono ko same speed se bhagao
        slow = nums[0];
        while(slow != fast){
            slow =  nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};