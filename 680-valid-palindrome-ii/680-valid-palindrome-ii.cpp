class Solution {
public:
    int indexOfdisruption = 0;
    //function to check if the string is palindrome or not
    bool check(string s){
        int size = s.length();
        for(int i=0;i<size;i++){
            if(s[i] != s[size-i-1]){
                indexOfdisruption = i;
                return false;
            }
        }
        return true;   
    }
    
    bool validPalindrome(string s) {
        if(check(s)){
            return true;
        }
        else{
            string temp =s;
            string s1 = s.erase(indexOfdisruption,1);
            string s2 = temp.erase(temp.length()-indexOfdisruption-1, 1);
            //remove the (size-i-1) index from string
            if(check(s1) || check(s2)){
                return true;
            }
            else{
                return false;
            }
        }
    }
};