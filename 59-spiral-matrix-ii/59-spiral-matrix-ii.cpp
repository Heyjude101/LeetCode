static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r = 0;
        int c = n-1;
        int val = n+1;
        int orient = 1;
        vector<vector<int>> ans(n,vector<int>(n));
        for(int i=0;i<n;i++){
            ans[0][i] = i+1;
        }
        for(int i = n-1; i>=1;i--){
            if(orient == 1){
                int d = i;
                while(d--){
                    r++;
                    ans[r][c] = val;
                    val++;
                }
                int l = i;
                while(l--){
                    c--;
                    ans[r][c] = val;
                    val++;
                }
                orient = 2;
            }
            else{
                int u = i;
                while(u--){
                    r--;
                    ans[r][c] = val;   
                    val++;
                }
                int j = i;
                while(j--){
                    c++;
                    ans[r][c] = val;
                    val++;
                }
                orient = 1;
            }
        }
        return ans;
    }
};