auto speedup=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin() , nums1.end());
        vector<int> ans;
        for(auto it: nums2){
            if(s1.count(it)){
                ans.push_back(it);
                s1.erase(it);
            }
        }
        return ans; 
    }
};