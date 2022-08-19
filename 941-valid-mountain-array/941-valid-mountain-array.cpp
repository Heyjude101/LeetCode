class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3){
            return false;
        }
        int orient  = 0;
        int switchh =0;
        for(int i=1;i<arr.size();i++){
            if(i==1){
                if(arr[i-1] >= arr[i]){
                    return false;
                }
            }
            if(orient == 0){
                if(arr[i-1] < arr[i]){
                    continue;
                }
                else if(arr[i] == arr[i-1]){
                    return false;
                }
                else{
                    switchh++;
                    orient = 1;
                }
            }
            else{
                if(arr[i] < arr[i-1]){
                    continue;
                }
                else if(arr[i] == arr[i-1]){
                    return false;
                }
                else{
                    switchh++;
                }
            }
        }
        
        if(switchh > 1){
            return false;
        }
        if(switchh ==0){
            return false;
        }
         return true;
        
    }
};