class Solution {
public:
    string removeStars(string s) {
        string ans;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '*') {
                ans.pop_back();
            } else {
                ans.push_back(s[i]);
            }
        }

        return ans;
    }
};




// class Solution {
// public:
//     string removeStars(string s) {
//         for(int i = 0;i<s.length();i++){
//             if(s[i]=='*'){
//                 s.erase(i-1,2);
//                 i = i - 2;
//             }
//         }

//         return s;
//     }
// };