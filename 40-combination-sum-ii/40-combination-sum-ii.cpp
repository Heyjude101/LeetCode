class Solution {
public:
    void findCombination(vector<vector<int>>& ans, const int index, const int target, vector<int>& v, const vector<int>& arr, int size)
    {
        //Base case
        if(target==0)
        {
            ans.push_back(v);
            return;
        }
        for(int i = index;i<size;i++) 
        {
            if(arr[i]>target) return;
            if(i&&arr[i]==arr[i-1]&&i>index) continue;
            v.push_back(arr[i]),
            findCombination(ans,i+1,target-arr[i],v , arr , size);
            v.pop_back();
        }
    }
    
    vector<vector<int> > combinationSum2(vector<int> &candidates, int target) 
    {
        vector<vector<int>> ans;
        int size = candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<int> v;
        findCombination(ans, 0, target, v, candidates , size);
        return ans;
    }
};