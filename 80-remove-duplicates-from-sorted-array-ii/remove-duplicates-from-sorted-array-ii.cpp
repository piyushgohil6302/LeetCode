class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=1;
        int b = 1;
      
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) {
                if (b < 2) {
                    nums[a++]=nums[i];
                    b++;
                }
            } else {
               nums[a++]=nums[i];
                b = 1;
            }
        }
        return a;
    }
};