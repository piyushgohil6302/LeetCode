class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>a;
        int c1=0,c2=0;
        int c=high,e=low;
        while(e!=0){
            e/=10;
            c1++;
        }
        while(c!=0){
            c/=10;
            c2++;
        }
        while(c1<=c2){
            int b=0;
            for(int i=1;i<=c1;i++){
                b=b*10+i;
            }
            if(b>=low && b<=high){
            a.push_back(b);
            }
            int d=0;
            for(int i=1;i<=c1;i++){
                d=d*10+1;
            }
            while(b<=high && b%10!=9){
                b=b+d;
                if(b>=low && b<=high){
                a.push_back(b);
                }

               
            }
            c1++;
       }
     
        return a;
    }
};