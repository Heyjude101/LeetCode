class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto it:s){
            if(it=='[' or it=='(' or it=='{'){
                st.push(it);
            }
            else{
                if(st.empty()) return false;
                else if((it== ')' && st.top()=='(') or (it== ']' && st.top()=='[') or (it== '}' && st.top()=='{')){
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