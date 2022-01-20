class Solution {
public:
    bool check(int m,vector<int> &piles,int h){
        int hrs=0;
        for(auto it:piles){
            int d = it/m;
            hrs +=d;
            if(it%m>0) hrs++;                   
                
            }
        if(hrs<=h) return true;
        return false;
        }
    
    
    
    
    
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right = *max_element(piles.begin() , piles.end());
        while(left<=right){
            int mid = (left + right)/2;
            if(check(mid , piles , h)){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
            
        }
        return left; 
    }
};