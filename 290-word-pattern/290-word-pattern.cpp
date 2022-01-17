class Solution {
public:
    vector<string> sentenceToVector(string s){
        vector<string> v;
        for(int i=s.length()-1;i>=0;i--){
            if(s.at(i) == ' '){
                v.push_back(s.substr(i+1));
                s.erase(i);
            }
        }
        v.push_back(s);
        reverse(v.begin() , v.end());
        return v;
    }  
public:
    bool wordPattern(string pattern, string s) {
        int len_p = pattern.length();
        vector<string> s_s = sentenceToVector(s);
        if(s_s.size() != len_p){
            return false;
        }
        unordered_map<char , string> m;
        set<string> str;
        for(int i=0; i<len_p;i++){
            if(m.count(pattern[i]) > 0){
                if(s_s[i] != m[pattern[i]]){
                    return false; 
                }  
            }
            else{
                if(str.count(s_s[i])>0){
                    return false;
                }
                
                m.insert({pattern[i] , s_s[i]});
                str.insert(s_s[i]);
            }
            
        }
        
        return true;
        
    }
};