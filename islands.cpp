class Solution {
public:
    
    void BFS(vector<vector<char>>& grid, int i, int j){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size() || grid[i][j] == '0'){
            return;
        }
        grid[i][j] = '0';
        BFS(grid, i+1, j);
        BFS(grid, i-1, j);
        BFS(grid, i, j+1);
        BFS(grid, i, j-1);
    }        
    
    int numIslands(vector<vector<char>>& grid) {
        int m =grid.size();
        int n =grid[0].size();
        int count = 0;
        
        for(int i = 0; i < m; i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == '1'){
                    count += 1;
                    BFS(grid, i, j);
                }   
            }            
        }
        return count;
    }
};