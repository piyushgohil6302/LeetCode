class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[0]*nums[1];
        int b=nums.size();
        int c=nums[b-1]*nums[b-2];
        int d=c-a;
         return d;
    }
};