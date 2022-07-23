class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi =INT_MIN;
        int miniP = INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i] < miniP){
                miniP = prices[i];
            }
            maxi = max(maxi , prices[i] - miniP);
        }
        return maxi; 
    }
};