class Solution {
public:
    struct packet{
        int num;
        int moves;
    };
    int ans = INT_MAX;
    int snakesAndLadders(vector<vector<int>>& board) {
        unordered_map<int , int> mp;
        int n  = board.size();
        vector<vector<int>> newMatrix(n , vector<int>(n , 0));
        int val = 1;
        if(n%2!=0){
            for(int i=n-1;i>=0;i--){
                if(i%2 == 0){
                    for(int j=0;j<n;j++){
                        newMatrix[i][j] = val++;
                    }
                }
                else{
                    for(int j=n-1;j>=0;j--){
                        newMatrix[i][j] = val++;
                    } 
                }
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                if(i%2 != 0){
                    for(int j=0;j<n;j++){
                        newMatrix[i][j] = val++;
                    }
                }
                else{
                    for(int j=n-1;j>=0;j--){
                        newMatrix[i][j] = val++;
                    } 
                }
            }
            
        }
        
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]!= -1){
                    mp[newMatrix[i][j]] = board[i][j];
                }
                else{
                    mp[newMatrix[i][j]] = newMatrix[i][j];
                }
            }
        }
        vector<bool> vis(n*n + 1 , false);
        queue<packet> q;
        q.push({1 , 0});
        vis[1] = true;
        while(!q.empty()){
            packet temp = q.front();
            q.pop();
            if(temp.num == n*n){
                return temp.moves;
            }
            for(int i=1;i<=6;i++){
                int new_pos = mp[temp.num + i];
                if(!vis[new_pos]){
                    vis[new_pos] = true;
                    // cout<<new_pos<<" "<<temp.moves + 1<<"\n";
                    q.push({new_pos,temp.moves + 1});
                }  
            }
        } 
        return -1;
    }
};