auto speedup=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    int maxDistance(vector<int>& n1, vector<int>& n2) {
        int i = 0;
        int j = 0;
        int res = 0;
        while (i < n1.size() && j < n2.size())
            if (n1[i] > n2[j]){
                i++;
                j++;
            }
            else{
                res = max(res, j - i);
                j++;
            }
        return res;
        }
};