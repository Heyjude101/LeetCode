class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //create the map
        unordered_map<int,int> map;
        for(int num : nums){
            map[num]++;
        }
        
        vector<int> res;
        //In pair, first is frequency and second is number
        priority_queue<pair<int,int>> pq; 
        for(auto it: map){
            pq.push(make_pair(it.second, it.first));
            if(pq.size() > (int)map.size() - k){
                res.push_back(pq.top().second);
                pq.pop();
            }
        }
        return res;
    }
};