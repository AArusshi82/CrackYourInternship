class Solution {
  public:
  
  void dfs(vector<int> adj[],vector<int>& ls, vector<int>& vis,int x)
  {
      vis[x]=1;
      ls.push_back(x);
      for(auto i:adj[x])
      {
          if(vis[i]==0)
          {
              dfs(adj,ls,vis,i);
          }
      }
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
        vector<int> ls;
        vector<int> vis(V,0);
        int x=0;
        dfs(adj,ls,vis,x);
        return ls;
    }
};