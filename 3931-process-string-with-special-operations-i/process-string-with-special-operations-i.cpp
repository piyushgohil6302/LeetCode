class Solution {
public:
    string processStr(string s) {
        string a = "";
        for(int i = 0; i < s.size(); i++){
            if(islower(s[i])){
                a.push_back(s[i]);
            }
            else if(s[i] == '*' && !a.empty()){  // guard pop_back
                a.pop_back();
            }
            else if(s[i] == '#'){                 // safe without guard
                a += a;
            }
            else if(s[i] == '%'){
                reverse(a.begin(), a.end());
            }
        }
        return a;
    }
};