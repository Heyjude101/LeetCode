class Solution {
public:
    int indexOfdis = 0;
    //function to check if the string is palindrome or not
    bool check(string s){
        int size = s.length();
        for(int i=0;i<size;i++){
            if(s[i] != s[size-i-1]){
                indexOfdis = i;
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
            string s1 = s.erase(indexOfdis,1);
            cout<<"s1: "<<s1<<endl;
            string s2 = temp.erase(temp.length()-indexOfdis-1, 1);
            cout<<"s2: "<<s2<<endl;
            //remove the size-i-1 index
            if(check(s1) || check(s2)){
                return true;
            }
            else{
                return false;
            }
        }
    }
};