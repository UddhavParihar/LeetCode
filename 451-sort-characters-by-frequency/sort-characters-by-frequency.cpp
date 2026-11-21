class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        string ans;
        int ma = 0;
        char sa;

        for(int i = 0; i < s.length(); i++){
            mpp[s[i]]++;
        }

        while(!mpp.empty()){
            ma = 0;

            for(auto it : mpp){
                if(it.second > ma){
                    ma = it.second;
                    sa = it.first;
                }
            }

            for(int i = 0; i < ma; i++){
                ans.push_back(sa);
            }

            mpp.erase(sa);
        }

        return ans;
    }
};