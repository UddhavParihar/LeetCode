class Solution {
public:
    int countPrimes(int n) {
        vector<bool> ans(n, true);
        int count = 0;

        if(n <= 2) return 0;

        ans[0] = ans[1] = false;

        for(int i = 2; i * i < n; i++) {
            if(ans[i]) {
                for(int j = i * i; j < n; j += i) {
                    ans[j] = false;
                }
            }
        }

        for(int i = 2; i < n; i++) {
            if(ans[i]) count++;
        }

        return count;
    }
};