class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a=0;
        vector<int>b;
        b.push_back(a);
        for(int i=0;i<gain.size();i++){
        a=a+gain[i];
         b.push_back(a);
        }
        sort(b.rbegin(),b.rend());
        return b[0];
    }
};