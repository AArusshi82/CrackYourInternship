class Solution {
public:

void dfs(vector<vector<int>>& image,vector<vector<int>>& ans,int ini,int color,int sr,int sc,int m,int n,int row[],int col[])
{
    ans[sr][sc]=color;
    for(int i=0;i<4;i++)
    {
        int r=sr+row[i];
        int c=sc+col[i];
        if((r>=0&&r<m)&&(c>=0&&c<n)&&image[r][c]==ini&&ans[r][c]!=color)
         {
            dfs(image,ans,ini,color,r,c,m,n,row,col);
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans=image;
        int ini=ans[sr][sc];
        ans[sr][sc]=color;
        int m=image.size();
        int n=image[0].size();
        int row[4]={-1,0,1,0};
        int col[4]={0,1,0,-1};
        
        dfs(image,ans,ini,color,sr,sc,m,n,row,col);
        return ans;
    }
};