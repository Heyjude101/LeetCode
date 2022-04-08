static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0;
        int right = letters.size()-1;
        char ans = letters[0];
        while(left <= right){
            int mid = left + (right -left)/2;
            if(letters[mid] <= target){
                left = mid +1;
            }
            else{
                right = mid - 1;
                ans = letters[mid];
                
            }
        }
        return ans;
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
        // int size = letters.size();
        // letters.push_back('.');
        // vector<char>::iterator it= upper_bound(letters.begin() , letters.begin()+size ,  target);
        // return (*it == '.')?letters[0]: *it;
        
    }
};