class Solution {
public:
    int count = 0;
    void dfs(int start , vector<int> &vis , vector<int> adj[]){
        count++;
        vis[start] = 1;
       for(auto it: adj[start]){
           if(vis[it] == -1)
           dfs(it , vis , adj);
       }
    }
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
       //make adjacency list
        vector<int> adj[n+2];
        //insert values int he adj list
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        //mark all restricted nodes as visited
        vector<int> vis(n+2 , -1);
        for(auto it: restricted){
            vis[it] = 1;
        }
        //now we need to run dfs
        dfs(0 , vis , adj);
        
        return count;
        
    }
};