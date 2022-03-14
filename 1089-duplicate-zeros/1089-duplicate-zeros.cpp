class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int len = arr.size();
        for(int i=0;i<len;i++){           
            if(arr[0] == 0){
                arr.push_back(arr[0]);
                arr.push_back(arr[0]);
                arr.erase(arr.begin());
            }
            else{
                arr.push_back(arr[0]);
                arr.erase(arr.begin());
            } 
        }
        arr.erase(arr.begin()+len , arr.end());
    }
};