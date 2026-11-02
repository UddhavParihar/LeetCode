class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int mi1 = INT_MAX;
        int mi2 = INT_MAX;
        int ma1 = INT_MIN;
        int ma2 = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < mi1) {
                mi2 = mi1;
                mi1 = nums[i];
            } else if (nums[i] < mi2) {
                mi2 = nums[i];
            }

            if (nums[i] > ma1) {
                ma2 = ma1;
                ma1 = nums[i];
            } else if (nums[i] > ma2) {
                ma2 = nums[i];
            }
        }

        return (ma1 * ma2) - (mi1 * mi2);
    }
};