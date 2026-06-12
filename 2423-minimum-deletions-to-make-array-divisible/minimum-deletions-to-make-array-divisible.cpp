class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int g=numsDivide[0];
        int a=numsDivide.size();
        int b=nums.size();
        for(int i=1;i<a;i++){
            g=__gcd(g,numsDivide[i]);
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<b;i++){
            if(g%nums[i]==0){
                return i;
                break;
            }
        }
        return -1;
    }
};