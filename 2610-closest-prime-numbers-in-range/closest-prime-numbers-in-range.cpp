class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
       vector<int>a;
       for(int i=left;i<=right;i++){
        if(i==2){
            a.push_back(2);  // ✅ Fixed: push 2 instead of skipping
            continue;
        }
        if(i<2){             // ✅ Fixed: skip numbers less than 2
            continue;
        }
        bool b=true;
        for(int j=2;(long long)j*j<=i;j++){  // ✅ Fixed: j*j<=i instead of j<i
            if(i%j==0){
                b=false;
                break;
            }
        }
        if(b){
            a.push_back(i);
        }
       } 

       if(a.size()<2) return {-1,-1};  // ✅ Fixed: handle fewer than 2 primes

       vector<int>c;
       for(int i=0;i<a.size()-1;i++){
        c.push_back(a[i+1]-a[i]);
       }

       int d=c[0],e=0;  // ✅ Fixed: initialize e=0
       for(int i=1;i<c.size();i++){
        if(d>c[i]){
            d=c[i];
            e=i;
        }
       }
       vector<int>f;
       f.push_back(a[e]);
       f.push_back(a[e+1]);
       return f;
    }
};