class Solution {
public:
    class Pair{
    public:    
        char character;
        int count;
        // Pair(char x, int y){
        //     character  = x;
        //     count = y;
        // }
    };
    string removeDuplicates(string s, int k) {
        stack<Pair> st;
        for(int i=0;i<s.length();i++){
            if(st.empty() || st.top().character != s[i]){
                // Pair p(s[i],1);
                Pair p;
                p.character = s[i];
                p.count =1;
                st.push(p);
            }
            else{
                st.top().count++;
                if(st.top().count == k) {
                    st.pop();
                }  
            }
        }
        string str="";
        //edit this
        while(!st.empty()){
            int count  = st.top().count;
            while(count--){
            str.push_back(st.top().character);
            }
            st.pop();
        }
        reverse(str.begin(), str.end());
        return str;  
    }
};