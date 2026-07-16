class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> a, b;
        int f = nums.size();
        int c=nums[0];
        for (int i = 0; i < f; i++) {
            a.push_back(nums[i]);
             c = max(c,nums[i]);
            int d = __gcd(c, nums[i]);
            b.push_back(d);
        }
        sort(b.begin(), b.end());
        long long sum = 0;
        for (int i = 0; i < f / 2; i++) {
            int e = __gcd(b[i], b[b.size() - 1 - i]);
            sum += e;
        }
        return sum;
    }
};