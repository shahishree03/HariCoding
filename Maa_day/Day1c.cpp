#include<bits/stdc++.h>
using namespace std;
#define fun main
class Sol{
    public:
    int orange(vector<vector<int>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();
       int cnt=0;
        queue<pair<pair<int, int>, int>> q;
        int vis[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i, j}, 0});
                    vis[i][j]=2;
                }
                else{
                    vis[i][j]=0;
                }
                
                if(grid[i][j]==1) cnt++;
            }
        }
        
        int tm =0, cnt1=0;
        int drow[] = {-1, 0, +1, 0};
        int dcol[] = {0, +1, 0, -1};
        while(!q.empty())
        {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            tm = max(tm , t);
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nrow = r + drow[i];
                int ncol = c + dcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0
                && grid[nrow][ncol]==1)
                {
                    q.push({{nrow, ncol}, t+1});
                    vis[nrow][ncol]=2;
                    cnt1++;
                }
                
            }
        }
       
        
       if(cnt!=cnt1) return -1;
       
       return tm;
        
    }
};

int fun()
{
    vector<vector<int>> grid{{0, 1, 2}, {0, 1, 2}, {2,1, 1}};
    Sol o;
    int ans = o.orange(grid);
    cout<<ans<<"\n";
}
