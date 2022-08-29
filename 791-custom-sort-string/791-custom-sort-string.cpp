class Solution {
public:
    static string stri;
    static bool compare(char a, char b){
        if(stri.find(a) < stri.find(b)){
            return true;
        }
        return false;
    }
    string customSortString(string order, string s) {
        stri  = order;
        sort(s.begin() , s.end() , compare);
        return s;
        
        
    }
};
string Solution :: stri;