class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(auto it: nums){
            if(set.find(it) != set.end()){
                return true;
            }
            else{
                set.insert(it);
            }
        }
        return false;
        
    }
};