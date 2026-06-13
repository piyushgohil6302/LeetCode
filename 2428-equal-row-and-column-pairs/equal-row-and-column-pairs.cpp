class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
       vector<vector<int>>a;
       for(int i=0;i<grid.size();i++){
        vector<int>temp;
        for(int j=0;j<grid.size();j++){
            temp.push_back(grid[j][i]);
        }
        a.push_back(temp);
       } 
       int c=0;
       for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid.size();j++){
            if(grid[i]==a[j]){
                c++;
            }
        }
       }
       return c;
    }
};