class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        if(size ==1) return 0;
        
        
        //For left array
        vector<int> l(size-1);
        int currL = height[0];
        l[0] = height[0];
        for(int i=1;i<size-1;i++){
            if(height[i]<currL){
                l[i] = currL;
            }
            else{
                currL = height[i];
                l[i] = height[i];
            }
        }
        
        
        // For right array
        vector<int> r(size-1);
        int currR = height[size-1];
        r[size-2] = height[size-1];
        for(int i=size-3;i>=0;i--){
            if(height[i+1]<currR){
                r[i] = currR;
            }
            else{
                currR = height[i+1];
                r[i] = height[i+1];
            }
        }
        
      //now solve the problem
        int ans =0;
        for(int i=0;i<size-1;i++){
            ans += max(0 , (min(l[i] , r[i]) - height[i]));
        }
        
        return ans;
    }
};
//Fast IO
static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);