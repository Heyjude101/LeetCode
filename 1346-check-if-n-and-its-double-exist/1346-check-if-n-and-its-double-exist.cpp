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
        int countx = 0;
        //initialize set
        for(auto it:  arr){
            if(it==0){
                countx++;
            }
            s.insert(it);
        }
        if(countx>=2) return true;
        
        for(auto it: arr){
            if(countx==0 && s.count(it*2)){
                return true;
            }
            if(countx==1 && it!= 0 &&  s.count(it*2)){
                return true;
            }
        }
        
        return false;
        
    }
};