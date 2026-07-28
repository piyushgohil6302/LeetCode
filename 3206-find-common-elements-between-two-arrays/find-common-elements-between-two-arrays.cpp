class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a;
        int b=0;
        int c=0;
        for(int i=0;i<nums1.size();i++){
           for(int j=0;j<nums2.size();j++){
            if(nums1[i]==nums2[j]){
                b++;
                break;
            }
           }
        }

         for(int i=0;i<nums2.size();i++){
           for(int j=0;j<nums1.size();j++){
            if(nums1[j]==nums2[i]){
                c++;
                break;
            }
           }
        }
        a.push_back(b);
        a.push_back(c);
        return a;
    }
};