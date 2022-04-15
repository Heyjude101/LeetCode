auto speedup=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int , int> mp;
        unordered_map<int , int> mp2;
        //map the arrays in frequency
        for(auto it: nums1){
            mp[it]++;
        }
        for(auto it: nums2){
            mp2[it]++;
        }
        
        for(auto it: mp){
            int key = it.first;
            int val = it.second;
            if(mp2.find(key) != mp2.end()){
                int small = min(val , mp2.find(key)->second);
                while(small--){
                    ans.push_back(key);
                }
            }
            
        }
        return ans;
    }
};