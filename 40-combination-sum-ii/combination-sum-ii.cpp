class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>result;
        vector<int>path;
        pro(candidates,target,0,path,result);
        return result;
    }
private:
    void pro(vector<int>&candidates,int rm,int start,vector<int>&path,vector<vector<int>>&result){
        if(rm==0){
            result.push_back(path);
            return;
        }
        else{
            for(int i=start;i<candidates.size();i++){
            if(candidates[i]>rm){
                break;
            }
            if (i > start && candidates[i] == candidates[i - 1]) {
                continue;
            }
            else{
                path.push_back(candidates[i]);
                pro(candidates,rm-candidates[i],i+1,path,result);
                path.pop_back();
            }
            }
        }
    }    
};