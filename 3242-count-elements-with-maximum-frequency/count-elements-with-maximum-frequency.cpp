class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       int sum=0;
       vector<int>a;
       for(int i=0;i<nums.size();i++){
         int b=1;
         for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                b++;
            }
         }
         a.push_back(b);
       }
       sort(a.rbegin(),a.rend());
       sum=a[0];
       for(int i=1;i<a.size();i++){
        if(a[0]==a[i]){
            sum+=a[0];
        }
        else{
        break;
        }
       }
       return sum;
    }
};