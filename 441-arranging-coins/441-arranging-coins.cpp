static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    long long sum(long long n){
        return (n * (n+1))/2;   
    }
    int arrangeCoins(int n) {
        if(n<=2) return 1;
        long long l  =1;
        long long r = n;
        long long ans;
        while(l<=r){
            long long mid = l + (r-l)/2;
            long long coinReq = (long long) sum(mid);
            if(coinReq == n){
                ans = mid;
                break;
            }
            else if(coinReq > n){
                r = mid - 1;
            }
            else{
                ans = mid;
                l = mid + 1;
            }
        }
        return ans;
        
    }
};