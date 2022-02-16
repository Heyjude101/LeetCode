class Solution {
public:
    bool solve(int n){
        if(n==1){
            return true;
        }
        if(n%2 !=0){
            return false;
        }
        else{
        return solve(n/2);
        }
    }
    bool isPowerOfTwo(int n) {
        // int flag =0;
        // if(n<0){
        //     return false;
        // }
        // if(n==0){
        //     return false;
        // }
        // if(n==1){
        //     return true;
        // }
        // while(n>0){
        //     if(n&1){
        //         flag++;
        //     }
        //     n=n>>1;
        // }
        // if(flag>1){
        //     return false;
        // }
        // else{
        //     return true;
        // }
        //Usiong recursion
        if(n<=0) return false;
        
        else{
        return solve(n);
        }
        
    }
};