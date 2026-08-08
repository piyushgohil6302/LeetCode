class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> a = queries;
        vector<int> d, e;
        for (int i = 1; i <= m; i++) {
            d.push_back(i);
        }
        int c = queries.size();
        for (int i = 0; i < c; i++) {
            int b = queries[i];
            for (int j = 0; j < m; j++) {
                if (b == d[j]) {
                    d.erase(d.begin() + j);
                    d.insert(d.begin(), b);
                    e.push_back(j);
                    break;
                }
            }
        }
        return e;
    }
};