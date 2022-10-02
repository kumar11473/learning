// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    bool isValid(int a,int b,int n,int m,vector<vector<int>>& grid)
    {
        if(a>=n|| a<0 || b>=m || b<0 || grid[a][b]==2 || grid[a][b]==0)
            return false;
        else
        {
            return true;
        }
            
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size(); int m=grid[0].size(); //n->rows m->column
        
        queue<pair<int,int>> q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                    q.push({i,j});
            }
        }
        int ans=-1;
        
    while(!q.empty())
    {
        ans++;
        int s=q.size();
        while(s!=0)
        {
            int xx=q.front().first;
            int yy=q.front().second;
            
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nx=xx+dx[i];
                int ny=yy+dy[i];
                
                if(isValid(nx,ny,n,m,grid))
                {
                    grid[nx][ny]=2;
                    q.push({nx,ny});
                }
            }
            s--;
        }
    }
    
     for(int i=0;i<n;i++)
     {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                  return -1;
            }
     }
        return ans;
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends