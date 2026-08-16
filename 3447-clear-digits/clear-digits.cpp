class Solution {
public:
    string clearDigits(string s) {
        string a = s;
        for (int i = 0; i < (int)a.size(); i++) {
            if (isdigit(a[i]) && i > 0) {
                a.erase(a.begin() + i);       
                a.erase(a.begin() + i - 1);   
                i -= 2;                        
                if (i < -1) i = -1;
            }
        }
        return a;
    }
};