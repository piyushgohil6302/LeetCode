class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int a,b;
      for(int i=0;i<nums.size();i++){
         if(nums[i]==1){
            continue;
        }
        bool c=true;
        for(int j=2;j<nums[i];j++){
            if(nums[i]%j==0 && nums[i]!=2){
                c=false;
                break;
            }
        }
        if(c){
            a=i;
            break;
        }
      }  
      for(int i=nums.size()-1;i>=0;i--){
        if(nums[i]==1){
            continue;
        }
        bool c=true;
        for(int j=2;j<nums[i];j++){
            if(nums[i]%j==0 && nums[i]!=2){
                c=false;
                break;
            }
        }
        if(c){
            b=i;
            break;
        }
      } 
      return abs(a-b); 
    }
};