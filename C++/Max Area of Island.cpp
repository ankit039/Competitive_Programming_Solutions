/*

Given a non-empty 2D array grid of 0's and 1's, an island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.

Find the maximum area of an island in the given 2D array. (If there is no island, the maximum area is 0.)

Example 1:

[[0,0,1,0,0,0,0,1,0,0,0,0,0],

[0,0,0,0,0,0,0,1,1,1,0,0,0],

[0,1,1,0,1,0,0,0,0,0,0,0,0],

[0,1,0,0,1,1,0,0,1,0,1,0,0],

[0,1,0,0,1,1,0,0,1,1,1,0,0],

[0,0,0,0,0,0,0,0,0,0,1,0,0],

[0,0,0,0,0,0,0,1,1,1,0,0,0],

[0,0,0,0,0,0,0,1,1,0,0,0,0]]

Given the above grid, return 6. Note the answer is not 11, because the island must be connected 4-directionally.

Example 2:

[[0,0,0,0,0,0,0,0]]

Given the above grid, return 0.

Note: The length of each dimension in the given grid does not exceed 50.

*/

// DFS solution


  

int dfs(int x,int y, vector<vector<int>>&grid, vector<vector<bool>>&v)
    {
    
    
        if(x<0 || y<0 || x>=grid.size()|| y>=grid[0].size() || v[x][y] == true || grid[x][y] == 0)
          {
              return 0;
          }
        
        else
          {
              v[x][y] = true;

               int    top = dfs(x-1,y,grid,v);

               int    left = dfs(x,y-1,grid,v);

               int    right = dfs(x,y+1,grid,v);

               int   down = dfs(x+1,y,grid,v);


              return (1+(left+right+down+top));

          }
      }
      
 int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int ans = 0;
        
        vector<vector<bool>> visited (grid.size(), vector<bool>(grid[0].size(), false));
        
        int n = grid.size();
        int m = grid[0].size();
    
            for(int i=0;i<n;i++)
            {
                for(int j = 0;j<m;j++)
                {
                    ans = max(ans,dfs(i,j,grid,visited));
                }
            }
        
        return ans;
    }
