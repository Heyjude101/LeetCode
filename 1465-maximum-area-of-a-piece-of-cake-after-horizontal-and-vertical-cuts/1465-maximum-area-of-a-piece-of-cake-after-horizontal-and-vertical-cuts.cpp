class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        //sort
        sort(horizontalCuts.begin() , horizontalCuts.end());
        sort(verticalCuts.begin() , verticalCuts.end());
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        
        long long max_h = 0,max_w = 0;
        long long prev =0;
        for(auto h: horizontalCuts){
            if(max_h < (long long)h-prev){
                max_h = (long long)h-prev;
            }
            prev = h;
        }
        prev =0;
        for(auto w: verticalCuts){
            if(max_w < (long long)w-prev){
                max_w = (long long)w-prev;
            }
            prev = w;
        }
        return (max_h * max_w)% 1000000007;
    }
};