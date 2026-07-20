class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>a=grid;
        for(int b=0;b<k;b++){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(j==n-1 && i!=m-1){
                        a[i+1][0]=grid[i][j];
                    }
                     if(j==n-1 && i==m-1){
                        a[0][0]=grid[i][j];
                    }
                    if(j<n-1){
                        a[i][j+1]=grid[i][j];
                    }
                }
            }
            grid=a;
        }
        return a;
    }
};