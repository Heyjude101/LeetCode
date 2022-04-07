class Solution {
public:
    bool check(int d, int target, vector<int> &arr2){
        int start = 0; int end = arr2.size()-1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(abs(arr2[mid]  - target) <= d){
                return false;
            }
            else if(arr2[mid] > target){
                end = mid -1;
            }
            else{
                start = mid + 1;
            }
        }
        return true;
        
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        //sort the array so we can apply binary search
        int ans= 0;
        sort(arr2.begin() , arr2.end());
        for(int i=0; i<arr1.size();i++){
            int curr = arr1[i];
            if(check(d,curr,arr2) == true){
                ans++;
            }
        }
        return ans;  
    }
};