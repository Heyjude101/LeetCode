class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int i=0, j =height.size()-1;
        while(i<j){
            int hi = height[i];
            int hj = height[j];
            area = max(area , (j-i) * min(hi , hj));
            if(hi <= hj) i++;
            else j--;
        } 
        return area;
    }
};