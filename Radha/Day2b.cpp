#include<bits/stdc++.h>
using namespace std;
#define fun main
class Sol{
    
    private:
    bool dfs(int node,int parent, vector<int> adj[], int vis[])
    {
        vis[node]=1;
       
            
            for(auto i:adj[node])
            {
                if(!vis[i])
                {
                    vis[i] =1;
                    //q.push({i, node});
                    if(dfs(i, node, vis, adj)==true) return true;
                
                }
                else if(parent!=i){
                  return true;    
                }
            }
            return false;
    }
    public:
   bool isCycle(int V, vector<int> adj[])
   {
       int vis[V]={0};
       for(int i=0;i<V;i++)
       {
           if(!vis[i])
           {
               if(dfs(1,-1, vis, adj)==true) return true;
           }
       }
       return false;
   }
        
    
};

int fun()
{ // V = 4, E = 2
    vector<int> adj[4] = {{}, {2}, {1, 3}, {2}};
    Solution obj;
    bool ans = obj.isCycle(4, adj);
    if (ans)
        cout << "1\n";
    else
        cout << "0\n";
    return 0;
}
