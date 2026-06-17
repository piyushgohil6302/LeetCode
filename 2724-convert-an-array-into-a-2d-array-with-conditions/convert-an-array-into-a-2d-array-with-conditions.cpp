class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> a;
        vector<int> b = nums;
        sort(b.begin(), b.end());
        while (!b.empty()) {
            vector<int> d, temp;
            int c = b[0];
            temp.push_back(c);
            for (int i = 1; i < b.size(); i++) {
                if (c != b[i]) {
                    temp.push_back(b[i]);
                    c = b[i];
                    d.push_back(i);
                }
            }
            a.push_back(temp);
            for (int j = d.size()-1; j >=0; j--) {
                b.erase(b.begin() + d[j]);
            }
            b.erase(b.begin());
        }
        return a;
    }
};