class Solution {
public:
    bool check(string s){
        for(int i=0;i<s.length();i++){
            if(s[i] != s[s.length()-i-1]){
                return false;
            }
        }
        return true;
    }
    bool isPalindrome(string s) {
        int size = s.length();
        string s1;
        for(int i=size-1;i>=0;i--){
            int asc  = int(s[i]);
            if(((asc>=65) && (asc<=90)) || ((asc>=48)&&(asc<=57)) || ((asc>=97)&&(asc<=122))){
                s1.push_back(tolower(char(asc)));
            }
        }
        return check(s1);
    }
};