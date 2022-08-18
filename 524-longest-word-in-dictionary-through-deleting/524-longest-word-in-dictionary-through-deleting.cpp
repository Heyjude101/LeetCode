class Solution {
public:
    bool isSubsequence(string &s, string &t) {
        int idx=0;
        for(int i=0 ; i<t.size() ; i++){
            if(t[i] == s[idx]) idx++;
        }
        if(idx == s.size()) return true;
        else return false;
    }
    static bool my_compare(string &a, string &b)
    {
        if (a.size() == b.size()){
            return a < b;
        }
        else{
            return a.size() > b.size();
        }
    }
    string findLongestWord(string s, vector<string>& dictionary) {
        string ans;
        sort(dictionary.begin() , dictionary.end() , my_compare); 
        for(auto it: dictionary){
            if(isSubsequence(it , s)){
                ans = it;
                break;
            }
        }
        return ans;
        
    }
};