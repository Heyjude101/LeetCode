auto speedup=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> v(n+1, true);
        v[0] = false;
        v[1] = false;
        
        for(int i =2; i*i<=n;i++){
            if(v[i] == true){
                for(int j= i*i;j<=n;j= j+i){
                    v[j] = false;
                }
            }
        }
        
        int count = 0;
        for(int i=2;i<n;i++){
            if(v[i]){
                count++;
            }
        }
        
        return count;
        
    }
};