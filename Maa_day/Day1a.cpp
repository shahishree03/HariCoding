#include<bits/stdc++.h>
using namespace std;

class Solution()
{

public:
vector<int> bfs(int v, vector<int> adj[])
{
int vis[n]= {0};
  vis[0]=1;
  queue<int> q;
  q.push(0);

vector<int> bs;
  while(!q.empty())
    {

int node = q.front();
      q.pop();
      bs.push(node);
      for(auto i:adj[node])
        {
          if(!vis[i])
          {
vis[i]=1;
            bs.push(i);
          }
        }
      
    }
return bs;
}
};

int main()
{

Solution s;
  s.bfs(n , adj);
}
