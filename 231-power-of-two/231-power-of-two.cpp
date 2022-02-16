class Solution {
public:
    bool isPowerOfTwo(int n) {
        int flag =0;
        if(n<0){
            return false;
        }
        if(n==0){
            return false;
        }
        if(n==1){
            return true;
        }
        while(n>0){
            if(n&1){
                flag++;
            }
            n=n>>1;
        }
        if(flag>1){
            return false;
        }
        else{
            return true;
        }
        
    }
};