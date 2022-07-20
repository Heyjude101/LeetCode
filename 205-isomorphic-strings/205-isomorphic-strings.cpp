class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> s_to_t;
        map<char, char> t_to_s;
        for (int i = 0; i < s.length(); i++) {
            char s_c = s[i];
            char t_c = t[i];
            
            
            if (s_to_t.count(s_c)) {
                if (s_to_t[s_c] != t_c) return false;
            } else {
                s_to_t[s_c] = t_c;
            }
            if (t_to_s.count(t_c)) {
                if (t_to_s[t_c] != s_c) return false;
            } else {
                t_to_s[t_c] = s_c;
            }
        }
        return true;
    }
};