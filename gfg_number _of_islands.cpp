// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    dx={'0','0','-1','1','-1','1','-1','1'}
    dy={'1','-1','0','0','-1','-1','1','1'}
    
    void dfsRec(int i,int j,vector<vector<char>> &grid,int n,int m)
    {
    	if(i>=n|| i<0 || j<0 || j>=m || grid[i][j]==0)
    		return ;
    	grid[i][j]='0';	
    	for(int k=0;k<8;k++)
    	{
    		int xx=i+dx[k];
    		int yy=j+dx[k];
    		dfsRec(xx,yy,grid,n,m);
    	}	
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here\
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<m;j++)
        	{
        		if(grid[i][j]=='1')
        		{
        			ans++;
        			dfsRec(i,j,grid,n,m);
        		}
        	}
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends