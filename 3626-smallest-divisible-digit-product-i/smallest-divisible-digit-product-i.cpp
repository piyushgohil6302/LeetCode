class Solution {
public:
    int smallestNumber(int n, int t) {
   
     return p(n,t);
     
    }
private:
    int p(int a,int t){
       int  pd=1;
        int b=a;
        while(b!=0){
            int digit=b%10;
            pd*=digit;
            b/=10;
        }
        if(pd%t==0){
        return a;
        }
        else{
           return p(a+1,t);
        }
    }    
};