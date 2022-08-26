class Solution {
public:
    string sort_con(int n){
        string temp = to_string(n);
        sort(temp.begin() , temp.end());
        return temp;
    }
    bool reorderedPowerOf2(int n) {
        for(int i=0;i<32;i++){
            if(sort_con(n) == sort_con(1<<i)){
                return true;
            }
        }
        
        
        return false;
        
        
    }
};