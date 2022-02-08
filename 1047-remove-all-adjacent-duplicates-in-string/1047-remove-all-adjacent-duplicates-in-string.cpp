class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int size = s.length();
        for(int i=0;i<size;i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                char val = st.top();
                if(s[i] == val){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        string ans ="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};