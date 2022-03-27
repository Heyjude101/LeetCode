class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans_sample;
        int r=mat.size() , c = mat[0].size();
        // for(int i=r-1;i>=0;i--){
        //     if(mat[i][c-1]==1){
        //         ans_sample.push_back(i);
        //     }
        // }
        for(int j=c-1;j>=0;j--){
            for(int i=r-1;i>=0;i--){
                if((j== c-1 or mat[i][j+1] ==0) &&  mat[i][j] == 1){
                    ans_sample.push_back(i);
                }
            }
        }
        for(int i=r-1;i>=0;i--){
            
            if(mat[i][0]==0) ans_sample.push_back(i);
        }
        // reverse(ans_sample.begin() , ans_sample.end());
        return vector<int>(ans_sample.rbegin() , ans_sample.rbegin()+k);
    }
};