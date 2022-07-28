class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag = 0, c=0;
        int len  =s.length();
        while((len--)>0){
            if(s[len]== ' '){
                if(flag == 1) break;
            }
            else{
                c++;
                flag  =1;
            }
        }
        return c;  
    }
};