class Solution{
private:
void d(int node, vector<int> adj[], int vis[], vector<int> & ls)
{
vis[node]=1;
ls.push_back(node);
  for(auto it:adj[node])
    {

if(!vis[it]
{
d(it, adj, vis, ls);
}
    }
}

public:

vector<int> dfs(int n, vector<int> adj[])
{
int vis[n]={0};
  int start=0;
  vector<int> ls;
  

}

};
