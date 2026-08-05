class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>a;
       // vector<double>b;
        double c;
        for(int i=0;i<nums1.size();i++){
            a.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            a.push_back(nums2[i]);
        }
       /* for(int i=0;i<a.size()-1;i++){
            if(a[i]<a[i+1]){
                b.push_back(a[i]);
            }
            else{
                b.push_back(a[i+1]);
            }
        }*/
        sort(a.begin(),a.end());
        if(a.size()%2==0){
            c=(a[a.size()/2]+a[a.size()/2-1])/2;
        }
        else{
            c=a[a.size()/2];
        }
        return c;
    }
};