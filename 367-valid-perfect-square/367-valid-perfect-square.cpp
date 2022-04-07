class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1;
        int j = num;
        while(i<=j){
            long long int mid = i + (j-i)/2;
            long long int midpro = mid*mid;
            if(midpro == num){
                return true;
            }
            else if(midpro < num){
                i = mid +1;
            }
            else{
                j = mid - 1;
            }
        }
        
        return false;
    }
};