class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i =0; i<=n;i++){
            int count=0, temp  =i;
            while(temp>0){
                if((temp&1) ==1)
                count++;
                temp  = temp>>1;  
            }
            ans.push_back(count);
            
            
        }
        return ans;
        
    }
};