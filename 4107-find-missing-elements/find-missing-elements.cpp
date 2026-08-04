class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>a;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]!=nums[i]+1){
                int b=nums[i]+1;
                while(nums[i+1]>b){
                    a.push_back(b);
                    b++;
                }
            }
        }
        return a;
    }
};