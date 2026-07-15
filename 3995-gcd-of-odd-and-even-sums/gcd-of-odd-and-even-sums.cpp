class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int a=n*n;
        int b=n*(n+1);
        int c=gcd(a,b);
        return c;
    }
};