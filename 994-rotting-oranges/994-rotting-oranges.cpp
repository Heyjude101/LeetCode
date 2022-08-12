class Solution {
public:
    int maxTime = 0;
    struct packet{
        int x;
        int y;
        int time;
    };
    int orangesRotting(vector<vector<int>>& grid) {
        //firstly we will check for all 2 and push in queue
        //we pop each layer and process the neighbour and then push it's neighbour to the back and process next element in queue
        
        
        //lets fill the queue first
        queue<packet> q;
        vector<vector<bool>> vis(grid.size() , vector<bool>(grid[0].size() , false));
        
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == 2){
                    q.push({i , j , 0});
                    //mark visited when we go first time
                    vis[i][j] = true;
                }
            }
        }
       // cout<<q.size()<<" ";
        //now the initial queue is ready and we can start the pop and push operations with avalable sides
        
        while(q.size()>0){
            //pop the front one and process it
            packet temp = q.front();
            
            q.pop();
            
            //yahi pe time max bhi nikal lo...nice jugaad
            maxTime = max(maxTime , temp.time);
            //if left possible, then push it
            if((temp.x- 1) >=0 and temp.y >= 0 and temp.y < grid[0].size() and temp.x < grid.size() and grid[temp.x -1][temp.y] == 1 and !vis[temp.x -1][temp.y]){
                q.push({temp.x -1 , temp.y , temp.time +1});
                //mark visited also here
 
                vis[temp.x-1][temp.y] = true;
                grid[temp.x-1][temp.y] = 2;
            }
            //if right possible, then push it
             if((temp.x ) >=0 and temp.y >= 0 and temp.y < grid[0].size() and temp.x+1 < grid.size() and grid[temp.x+1][temp.y] == 1 and !vis[temp.x+1][temp.y]){
                q.push({temp.x +1 , temp.y , temp.time +1});
                //mark visited also here
                vis[temp.x+1][temp.y] = true;
                grid[temp.x+1][temp.y] = 2;

            }
              //if up possible, then push it
             if(temp.x >=0 and (temp.y-1) >= 0 and temp.y < grid[0].size() and temp.x < grid.size() and grid[temp.x][temp.y-1] == 1 and !vis[temp.x][temp.y-1]){
                q.push({temp.x , temp.y-1 , temp.time +1});
                //mark visited also here
                vis[temp.x][temp.y-1] = true;
                grid[temp.x][temp.y-1] = 2;

            }
              //if down possible, then push it
             if(temp.x >=0 and (temp.y) >= 0 and temp.y+1 < grid[0].size() and temp.x < grid.size() and grid[temp.x][temp.y+1] == 1 and !vis[temp.x][temp.y+1]){
                q.push({temp.x , temp.y+1 , temp.time +1});
                //mark visited also here
                vis[temp.x][temp.y+1] = true;
                grid[temp.x][temp.y+1] = 2;

            }
          //  cout<<q.size()<<endl;
             
        }
        
        
        // agar koi 1 reh jata hai grid  mein toh return -1 kar denge
        for(auto it: grid){
            for(auto ite: it){
                if(ite == 1){
                    return -1;
                }
            }
        }
        
        //baki maxTime ko hi return kardo
        return maxTime;
        
        
        
    }
};