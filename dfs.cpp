int d[8][2]={{-1,-1},{-1,0},{-1,1},{1,-1},{1,0},{1,1},{0,-1},{0,1}};
int n,mm;
void dfs(vector<vector<int> > &A, vector<vector<int>> &vis,int i,int j,int& c)
{
    //cout<<i<<j<<" ";
    c++;
    vis[i][j]=1;
    int a,b;
    for(int k=0;k<8;k++)
    {
        a=i+d[k][0];
        b=j+d[k][1];
        if(a<0||a>=n||b<0||b>=mm)continue;
        if(vis[a][b]||!A[a][b])continue;
        dfs(A,vis,a,b,c);
    }
}
int Solution::solve(vector<vector<int> > &A) {
     n=A.size(),mm=A[0].size();
     int m=0;
    vector<vector<int>> vis(n,vector<int>(mm,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<mm;j++)
        {
            if(A[i][j]&&!vis[i][j])
            {
                int c=0;
                dfs(A,vis,i,j,c);
                m=max(m,c);
            }
        }
    }
    return m;
}