// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long start = 1;
        long end = (long) n;
        while(start<end){
            long mid = start + (end-start)/2;
            if(isBadVersion(mid)){
                end = mid;
            }
            else{
                start = mid+1;
            }
        }
        return start;
        
    }
};