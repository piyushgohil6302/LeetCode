class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int a,b;
        int d=nums.size();
      for(int i=0;i<d;i++){
        int e=nums[i];
         if(e==1){
            continue;
        }
        bool c=true;
        for(int j=2;j<e;j++){
            if(e%j==0 && e!=2){
                c=false;
                break;
            }
        }
        if(c){
            a=i;
            break;
        }
      }  
      for(int i=d-1;i>=0;i--){
        int e=nums[i];
        if(e==1){
            continue;
        }
        bool c=true;
        for(int j=2;j<e;j++){
            if(e%j==0 && e!=2){
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