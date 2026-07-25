class Solution {
public:
    int maxProduct(int n) {
        vector<int>a;
        int b=n;
        while(b!=0){
            int d=b%10;
            a.push_back(d);
            b/=10;
        }
        sort(a.begin(),a.end());
        return a[a.size()-1]*a[a.size()-2];
    }
};