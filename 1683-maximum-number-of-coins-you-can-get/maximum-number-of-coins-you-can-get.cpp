class Solution {
public:
    int maxCoins(vector<int>& piles) {
       int sum=0;
       int a=piles.size()/3;
       sort(piles.rbegin(),piles.rend());
       int i=1;
       while(a!=0){
        sum=sum+piles[i];
        i+=2;
        a--;
       }
       return sum;
    }
};