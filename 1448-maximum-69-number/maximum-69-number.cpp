class Solution {
public:
    int maximum69Number (int num) {
        vector<int>a;
        int b=num;
        while(b!=0){
            a.push_back(b%10);
            b/=10;
        }
        for(int i=a.size()-1;i>=0;i--){
            if(a[i]==6){
                a[i]=9;
                break;
            }
        }
        int c=0;
        for(int i=a.size()-1;i>=0;i--){
            c=(c*10)+a[i];
        }
        return c;
    }
};