class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int c=0;
            int a=nums[i];
            while(a!=0){
                c++;
                a/=10;
            }
            if(c%2==0){
                sum++;
            }
        }
        return sum;
    }
};