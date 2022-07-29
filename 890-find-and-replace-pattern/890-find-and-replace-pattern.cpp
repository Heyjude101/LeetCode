class Solution {
public:
    vector<int> patternify(string s){
        vector<int> ans;
        int idx = 1;
        unordered_map<char , int> mp;
        for(int i=0;i<s.size();i++){
            if(mp.count(s[i])){
                ans.push_back(mp[s[i]]);
            }
            else{
                ans.push_back(idx);
                mp[s[i]] = idx++;
            }
        }
        return ans;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<int> master = patternify(pattern);
        vector<string> finalAns;
        for(auto it: words){
            if(patternify(it) == master){
                finalAns.push_back(it);
            }
        }
        return finalAns; 
    }
};