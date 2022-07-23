class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char , int> mp;
        int ans  =0;
        //insert into map
        for(auto it: s){
            mp[it]++;
        }
        bool flag= false;
        //traverse the map
        for(auto it: mp){
            if(it.second %2 ==0){
                ans += it.second;
            }
            else{
                flag = true;
                ans+= it.second-1;
            }
        }
        
        if(flag == true) return ans+1;
        else
            return ans;
        
        
        
    }
};