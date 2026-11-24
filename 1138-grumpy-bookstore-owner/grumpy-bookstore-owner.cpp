
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int l = 0;
        int r = minutes - 1;

        long long sum = 0;
        long long ma;
        long long ans = 0;

        for(int i = 0; i <= r; i++) {
            if(grumpy[i] == 1) {
                sum += customers[i];
            }
        }

        ma = sum;

        while(r < customers.size() - 1) {
            if(grumpy[l] == 1) {
                sum -= customers[l];
            }

            l++;
            r++;

            if(grumpy[r] == 1) {
                sum += customers[r];
            }

            ma = max(ma, sum);
        }

        // Find initially satisfied customers
        for(int i = 0; i < customers.size(); i++) {
            if(grumpy[i] == 0) {
                ans += customers[i];
            }
        }

        return ans + ma;
    }
};
