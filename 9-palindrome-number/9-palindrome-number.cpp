class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
            string s = to_string(x);
            string _s = s;
            reverse(_s.begin() , _s.end());
            if(_s == s ){
                return true;
            }
        }
        return false;
        
    }
};