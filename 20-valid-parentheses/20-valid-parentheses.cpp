class Solution {
public:
    bool isValid(string s) {
        unordered_map<char , char> mp;
        mp['}'] = '{';
        mp[']'] = '[';
        mp[')'] = '(';
        stack<char> st;
        for(auto it:s){
            if(it=='[' or it=='(' or it=='{'){
                st.push(it);
            }
            else{
                if(st.empty()) return false;
                else if(st.top() == mp[it]){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
      
        
    }
};