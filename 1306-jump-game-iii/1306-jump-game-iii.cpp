class Solution {
public:
    bool dp[500000];
    map<int,int>visit;
    bool solve(vector<int> &arr , int start){
        //base case
        //check for condition meeting errors
        //check for out of bound errors
        if(visit[start]>1)
        {
            return false;
        }
        if(start > arr.size()-1 or start < 0){
            return false;
        }
        if(arr[start] == 0){
            return true;
        }
        
        if(dp[start] != false){
            return dp[start];
        }
        visit[start]++;
        //main case
        bool checkFront = solve(arr , start + arr[start]);
        bool checkBack = solve(arr , start - arr[start] );
        return checkFront or checkBack;
        
    }
    bool canReach(vector<int>& arr, int start) {
        //check if 0 is there in the array or not
        bool flag = false;
        for(auto it: arr){
            if(it == 0){
                flag = true;
                
            }
        }
        if(flag == false){
            return false;
        }
        memset(dp , false , sizeof(dp));
        return solve(arr , start);
        
    }
};