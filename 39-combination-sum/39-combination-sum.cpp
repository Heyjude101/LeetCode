class Solution {
    
public:
    void findcombination(int index, vector<int> &v , int target , vector<int> &arr, vector<vector<int>> &ans){
        if(index == arr.size()){
            if(target == 0){
                ans.push_back(v);
            }
            return;
        }
        //pick
        if(arr[index] <= target){
        v.push_back(arr[index]);
        findcombination(index  , v , target - arr[index] , arr , ans);
        //not pick
        v.pop_back();
        }
        findcombination(index+1 , v , target ,  arr, ans); 
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        findcombination(0 , v , target , candidates , ans);
        return ans;
    }
};