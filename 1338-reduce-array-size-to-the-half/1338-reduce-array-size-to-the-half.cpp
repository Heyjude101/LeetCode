class Solution {
public:
    static bool compare(const pair<int,int> a , const pair<int,int> b){
        return a.second > b.second;
        
    }
    int minSetSize(vector<int>& arr) {
        //make map
        unordered_map<int , int> mp;
        for(auto it: arr){
            mp[it]++;
        }
        //push in a vector of pairs
        vector<pair<int , int>> v;
        for(auto it: mp){
            v.push_back(make_pair(it.first , it.second));
        }
        sort(v.begin() , v.end() , compare);
        int total = arr.size();
        int half = total/2;
        int ans = 0;
        
        for(auto it: v){
            ans++;
            total -= it.second;
            if(total <= half){
                break;
            }
        }
        
        return ans;
    }
};