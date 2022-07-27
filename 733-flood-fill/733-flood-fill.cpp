class Solution {
public:
    void solve(vector<vector<int>> &image , int sr , int sc , int color , int original){
        //base cases
        //check out of bounds conditions
        if(sr < 0 or sr>= image.size() or sc < 0 or sc>= image[0].size() or image[sr][sc] == color or image[sr][sc] != original){
            return;
        }
        image[sr][sc] = color;
        
        //fill top
        solve(image , sr-1, sc, color , original);   
        //fill bottom
        solve(image , sr+1, sc, color , original);
        //fill right
        
        //fill left
        solve(image , sr, sc-1, color , original);
        solve(image , sr, sc+1, color , original);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        //first fill the same box and then make recurrsive calls forward
        // vector<vector<int>> visited(image.size()+5 , vector<int>(image[0].size()+5 , -1));
        int val = image[sr][sc];
        solve(image , sr, sc  , color, val);
        return image;
        

        
    }
};