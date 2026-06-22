class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int a=names.size();
        for(int i=0;i<a;i++){
            for(int j=i;j<a;j++){
                if(heights[i]<heights[j]){
                    int temp=heights[i];
                    heights[i]=heights[j];
                    heights[j]=temp;

                    string temp1=names[i];
                    names[i]=names[j];
                    names[j]=temp1;
                }
            }
        }
        return names;
    }
};