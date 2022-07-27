class Solution {
public:
    
    bool DFSRec(int s, vector<bool>& visited, vector<bool>& dfsvisited, vector<int> adj[]){
        visited[s] = true;
        dfsvisited[s] = true;
        
        vector<int> data = adj[s];
        for(auto x: data){
            if(!visited[x]){
                if(DFSRec(x, visited, dfsvisited, adj)){
                    return true;
                }
            }
            else if(visited[x] && dfsvisited[x])
                return true;
        }
        
        dfsvisited[s] = false;
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        
        vector<bool> visited(n, false), dfsvisited(n ,false);
        
        vector<int> adj[n];
        for(auto x: prerequisites){
            vector<int> data = x ;
            int a = data[0];
            int b = data[1];
            adj[a].push_back(b);
        }
        
        for(int i = 0; i<n ;i++){
            if(!visited[i]){
                if(DFSRec(i ,visited, dfsvisited, adj))
                    return false;
            }
        }
        return true;
    }
};