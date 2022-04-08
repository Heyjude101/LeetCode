static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int mySqrt(int x) {
        long long left = 1;
        long long right = (long long) x;
        if(x==0) return 0;
        while(left+1<right){
            long long mid = (left + right)/2;
            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid < x){
                left = mid;
            }
            else{
                right  = mid-1;
            }
        }
        if(right*right<=x) return right;
         return left;
    }
};