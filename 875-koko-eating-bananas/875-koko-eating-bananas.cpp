class Solution {
public:
    bool check(vector<int> &piles,int h , int m){
          long long hrs=0;
        for(auto it:piles){
            int d = it/m;
            hrs +=d;
            if(it%m>0) hrs++;                   
                
            }
        if(hrs<=h) return true;
        return false;
        }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        long long minK =  1;
        long long maxK = *max_element(piles.begin() , piles.end());
        // int maxK = 10000000;
        long long midK;
        while(minK <= maxK){
            midK  = (minK) + (maxK-minK)/2;
            if(check(piles , h , midK)){
                maxK = midK-1;
            }
            else{
                minK = midK+1;
            }
            
        }
        
        return minK;
    }
};