class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long i=0; i*i <=c;i++){
            long long check = c - (i*i);
            double n = sqrt(check);
            if(ceil(n) == floor(n)){
                return true;
            }
        }
        return false;
    }
};