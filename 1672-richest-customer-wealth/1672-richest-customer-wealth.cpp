class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans =0, sum = 0, max = -1;
        int banks= accounts[0].size();
        int cus = accounts.size();
        for(int i =0;i<cus;i++){
            for(int j = 0;j<banks;j++){
                sum +=accounts[i][j];
            }
            if(sum > max){
                max = sum;
            }
            sum = 0;
        }
        ans = max;
        return ans;
        
    }
};