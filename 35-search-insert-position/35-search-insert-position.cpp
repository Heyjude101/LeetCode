class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size()==1){
            if(nums[0] >= target) return 0;
            else return 1;
        }
        int i =0;
        int j= nums.size()-1;
        int mid;
        while(i<=j){
            mid = i + (j-i)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target){
                j = mid -1;
            }
            else{
                i = mid + 1;
            }
        }
        if(target < nums[mid])
        return mid;
        else return mid+1;
        
    }
};

static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);