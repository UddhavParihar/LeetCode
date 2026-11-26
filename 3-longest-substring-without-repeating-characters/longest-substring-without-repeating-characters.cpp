class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        unordered_map<int,int> mpp;
        int ma = 0;

        while(r<s.size()){
            if(mpp.find(s[r])==mpp.end()){
                mpp[s[r]]++;
            }else if(mpp.find(s[r])!=mpp.end()){
                while(mpp[s[r]]!=0){
                    mpp[s[l]]--;
                    l++;
                }
                mpp[s[r]]++;

            }

            r++;

            ma = max(ma,r-l);


            
        }

        return ma;
    }
};