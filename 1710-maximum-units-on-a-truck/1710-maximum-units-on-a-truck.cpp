class Solution {
public:
    static bool myfunction(vector<int>& a, vector<int>& b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin() , boxTypes.end() , myfunction);
        int sum =0;
        int i=0;
        int size = boxTypes.size();
        for(auto it:boxTypes){
            int used = min(it[0] , truckSize);
            truckSize -= used;
            sum += used * it[1];
            if(truckSize<=0) break;
        }
        return sum;
    }
};
//sum = 8
//trucksize = 0