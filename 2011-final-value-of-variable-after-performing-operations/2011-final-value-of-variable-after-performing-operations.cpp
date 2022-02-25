class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0;
        for(auto it: operations){
            if(it == "--X" || it == "X--"){
                count--;  
            }
            else{
                count++;
            }
        }
        return count;
        
    }
};