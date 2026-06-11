class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums,
                                    vector<vector<int>>& queries) {
        vector<int> a;
        int b = queries.size();
        for (int i = 0; i < b; i++) {
            int sum = 0;
            int c = queries[i][1];
            int d = queries[i][0];
            nums[c] = nums[c] + d;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] % 2 == 0) {
                    sum += nums[j];
                }
            }
            a.push_back(sum);
        }
        return a;
    }
};