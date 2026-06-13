class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
       vector<vector<int>>a;
       int b=grid.size();
       for(int i=0;i<b;i++){
        vector<int>temp;
        for(int j=0;j<b;j++){
            temp.push_back(grid[j][i]);
        }
        a.push_back(temp);
       } 
       int c=0;
       for(int i=0;i<b;i++){
        for(int j=0;j<b;j++){
            if(grid[i]==a[j]){
                c++;
            }
        }
       }
       return c;
    }
};