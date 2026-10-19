class Solution {
public:
    int reverseDegree(string s) {
        int count = 0;
        
        for(int i = 0;i<s.length();i++){
            count = count + abs(((i+1)*(((int)s[i])-123)));
        }
        return count;
    }
};