class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>> s;
        for(int i=0;i<mat.size();i++){
            s.insert({accumulate(mat[i].begin() , mat[i].end(),0 ), i});
        }
        vector<int> ans;
        int kz =0;
        for(auto it: s){
            if(kz<k){
            ans.push_back(it.second);
            kz++;
            }
            else{
                break;
            }
        }
        
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         set<pair<int,int> > s;
//         vector<int> ans;
//         for(int i=0;i<mat.size();i++){
//             s.insert({accumulate(mat[i].begin() , mat[i].end(),0) , i});
//             // s.insert({lower_bound(mat[i].begin() , mat[i].end() , 0) - mat[i].begin()-1 , i});

//         }
//         int c =1;
//         for(auto it= s.begin(); it!= s.end();it++){
//             if(c<=k){
//                 ans.push_back(it->second);
//                 c++;
//             }
//             else{
//                 break;
//             }
//         }
//         return ans;
        
        
        
        
//         vector<int> ans_sample;
//         int r=mat.size() , c = mat[0].size();
//         // for(int i=r-1;i>=0;i--){
//         //     if(mat[i][c-1]==1){
//         //         ans_sample.push_back(i);
//         //     }
//         // }
//         for(int j=c-1;j>=0;j--){
//             for(int i=r-1;i>=0;i--){
//                 if((j== c-1 or mat[i][j+1] ==0) &&  mat[i][j] == 1){
//                     ans_sample.push_back(i);
//                 }
//             }
//         }
//         for(int i=r-1;i>=0;i--){
            
//             if(mat[i][0]==0) ans_sample.push_back(i);
//         }
//         // reverse(ans_sample.begin() , ans_sample.end());
//         return vector<int>(ans_sample.rbegin() , ans_sample.rbegin()+k);
    }
};