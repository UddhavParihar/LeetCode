class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int count = 0;
        int un = 0;
        int tot = rolls.size() + n;
        vector<int> ans;

        for (int i = 0; i < rolls.size(); i++) {
            count += rolls[i];
        }

        un = (mean * tot) - count;

        if (un < n || un > 6 * n) {
            return ans;
        }

        while (n != 0) {
            int val = un / n;
            ans.push_back(val);
            un -= val;
            n--;
        }

        return ans;
    }
};