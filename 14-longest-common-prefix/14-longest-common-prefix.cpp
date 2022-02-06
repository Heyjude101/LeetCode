class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int tot_len = strs.size();
        int min = 500;
        string s = "";
        for(int i=0;i<tot_len; i++){
            if(strs[i].length()<min){
                min = strs[i].length();
            }
        }
        for(int i=0; i<min; i++){
            int c=0;
            for(int j =0; j<tot_len-1;j++){
                if(strs[j][i] == strs[j+1][i]){
                    c++;
                }
                
            }
            if(c+1 == strs.size()){
                s.push_back(strs[0][i]);
            }
            else{
                break;
            }
            
        }
        return s;
        
    }
};