class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int sum = 0;
        int max = 0;
        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            max = max | a;
        }
        int n = nums.size();
        for (int i = 1;  i < (1 << n); i++) {
            int c = 0;
            for (int j = 0; j < n; j++) {

                if (i & (1 << j)) {
                    c = c | nums[j];
                }
            }
            if (c == max) {
                sum++;
            }
        }
        return sum;
    }
};