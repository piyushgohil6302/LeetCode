class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>a;
        for(int i=0;i<queries.size();i++){
            int sum=0;
            int c=queries[i][0];
            int d=queries[i][1];
            for(int j=0;j<points.size();j++){
                int e=points[j][0];
                int f=points[j][1];
                int b=(e-c)*(e-c)+(f-d)*(f-d);
                if(pow(queries[i][2],2)>=b){
                 sum++;
                }
            }
            a.push_back(sum);
        }
        return a;
    }
};