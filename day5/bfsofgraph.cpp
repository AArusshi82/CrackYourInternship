class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        vector<int> bfs;
        queue<int> q;
        q.push(0);
        vis[0]=1;
        while(!q.empty())
        {
            int x=q.front();
            
            q.pop();
            bfs.push_back(x);
            for(auto i:adj[x])
            {
                if(vis[i]!=1)
             {   q.push(i);
                vis[i]=1;
            }
            }
        }
        return bfs;
    }
};