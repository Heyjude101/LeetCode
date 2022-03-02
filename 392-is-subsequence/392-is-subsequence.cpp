class Solution {
public:
    bool isSubsequence(string s, string t) {
        int len = s.length();
        int lent = t.length();   
        if(len>lent) return false;
        if(len==0) return true;
        int lastloc=0;
        int f;
        for(int i=0;i<len;i++){
            f = 0;
            for(int j=lastloc;j<lent;j++){
                if(t[j] == s[i]){
                    lastloc = j+1;
                    cout<<lastloc<<" ";
                    f = 1;
                    break;
                } 
            }
            if(f!=1) return false;
        }
        return true;
        
    }
};