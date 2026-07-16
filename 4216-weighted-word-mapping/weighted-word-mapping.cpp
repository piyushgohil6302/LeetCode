class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
       string a;
       for(int i=0;i<words.size();i++){
        int sum=0;
        for(int j=0;j<words[i].size();j++){
            sum+=weights[(words[i][j])-97];
        }
        a.push_back(122-(sum%26));
       }
       return a;
    }
};