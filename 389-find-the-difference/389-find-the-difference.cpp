class Solution {
public:
    char findTheDifference(string s, string t) {
        int sizes = s.length();
                int sizet = t.length();

        // cout<<size;
        int sums=0,sumt=0;
        for(int i=0; i<sizes;i++){
            sums += int(s[i]);
        }
        cout<<"Sum of s is: "<<sums;
        for(int i=0; i<sizet;i++){
            sumt += int(t[i]);
        }
        cout<<"Sum of t is: "<<sumt;
        
        return char(sumt-sums);    
    }
};