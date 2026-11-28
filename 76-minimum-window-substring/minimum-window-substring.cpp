class Solution {
public:
    string minWindow(string s, string t) {

        if (t.length() > s.length()) {
            return "";
        }

        map<char, int> mpp;

        int l = 0;
        int r = 0;
        int mi = INT_MAX;
        int lc = 0;

        for (int i = 0; i < t.length(); i++) {
            mpp[t[i]]++;
        }

        while (r < s.length()) {

            if (mpp.find(s[r]) != mpp.end()) {
                mpp[s[r]]--;
            }

            bool k = true;

            for (auto it : mpp) {
                if (it.second > 0) {
                    k = false;
                    break;
                }
            }

            while (k && l <= r) {

                // Skip irrelevant characters
                while (l <= r && mpp.find(s[l]) == mpp.end()) {
                    l++;
                }

                // Record the window after skipping irrelevant characters
                if (r - l + 1 < mi) {
                    mi = r - l + 1;
                    lc = l;
                }

                // Remove the next required character
                mpp[s[l]]++;
                l++;

                // Check validity again
                k = true;

                for (auto it : mpp) {
                    if (it.second > 0) {
                        k = false;
                        break;
                    }
                }
            }

            r++;
        }

        if (mi == INT_MAX) {
            return "";
        }

        return s.substr(lc, mi);
    }
};