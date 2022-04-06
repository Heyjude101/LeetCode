class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        sort(arr.begin() , arr.end());
        long ans=0;
        for(int i =0;i<arr.size()-1;i++){
            int start = i+1;
            int end = arr.size()-1;
            while(start< end){
                int twoSumTarget = target  - arr[i];
                if(arr[start] + arr[end] < twoSumTarget){
                    start++;
                }
                else if(arr[start] + arr[end] > twoSumTarget){
                    end--;
                }
                else if(arr[start] != arr[end]){
                    int l=1;
                    int r=1;
                    while(start+1 < end and arr[start] == arr[start+1]){
                        l++;
                        start++;
                    }
                    while(end-1 > start and arr[end] == arr[end-1]){
                        r++;
                        end--;
                    }
                    ans %= 1000000007;
                    ans += (l*r)%1000000007;
                    ans %= 1000000007;
                    end--;
                    start++;
                }
                else{
                    ans = (ans + ((end - start + 1)*(end - start)/2)%1000000007)%1000000007;
                    break;
                }
            }
        }
        return (int)ans;
    }
};