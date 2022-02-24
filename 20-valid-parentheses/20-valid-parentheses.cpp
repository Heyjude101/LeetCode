class Solution {
public:
    bool isValid(string s) {
        map<char , char> mp;
        mp['}'] = '{';
        mp[']'] = '[';
        mp[')'] = '(';
        stack<char> st;
        for(auto it:s){
            if(it=='[' or it=='(' or it=='{'){
                cout<<it;
                st.push(it);
            }
            else{
                if(!st.empty() && st.top() == mp[it]){
                    cout<<it;
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