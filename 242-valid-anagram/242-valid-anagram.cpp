class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        //now both sizes are same
        //traverse s
        unordered_map<char , int> mp;
        for(auto it: s){
            mp[it]++;
        }
        for(auto it: t){
            if(mp.count(it)>0){
                mp[it]--;
                if(mp[it] == 0){
                    mp.erase(it);
                }
            }
            else{
                return false;
            }
        }
        if(!mp.empty()){
            return false;
        }
        return true;  
    }
};