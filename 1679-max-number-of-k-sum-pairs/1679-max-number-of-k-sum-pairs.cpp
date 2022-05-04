class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>map;
            int ans = 0;
        for(int i =0; i<nums.size();i++){
            int d = k-nums[i];

            if(map.find(d)!=map.end()){

                ans++;
                map[d]--;
                if(map[d] == 0){
                    map.erase(d);
                }
            }
            else{
                map[nums[i]]++;
            }
        }
        return ans;

    }
};