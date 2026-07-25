class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>result;
        vector<int>path;
        pro(candidates,path,0,result,target);
        return result;
    }
private:
   void pro(vector<int>& candidates,vector<int>& path,int start,vector<vector<int>>& result,int rm){
    if(rm==0){
        result.push_back(path);
        return ;
    }
    else{
        for(int i=start;i<candidates.size();i++){
            if(candidates[i]>rm){
                break;
            }
            else{
                path.push_back(candidates[i]);
                pro(candidates,path,i,result,rm-candidates[i]);
                path.pop_back();
            }
        }
    }
   }
   

};