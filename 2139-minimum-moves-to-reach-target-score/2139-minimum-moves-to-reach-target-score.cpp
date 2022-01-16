class Solution {
public:
    int minMoves(long long target, long long maxDoubles) {
        long long moves = 0;
        while(target>1 && maxDoubles>0){
            // if(target ==1){break;}
            if(target%2!=0){
                target=target-1;
                moves++;
            }
            target = target/2;
            moves++;
            maxDoubles--;
        }
        moves = moves + target;
        return moves-1;
        
    }
};