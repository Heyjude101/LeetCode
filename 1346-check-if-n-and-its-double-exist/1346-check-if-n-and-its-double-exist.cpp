auto speedup=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;
        //one pass approach
        for(auto it: arr){
            if(s.count(it*2) || (it%2 == 0 && (s.count(it/2)))){
                return true;
            }
            s.insert(it);
        }
        return false;
    }
};