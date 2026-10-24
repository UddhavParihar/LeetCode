class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int a = 0;
        int b = nums.size() - 1;
        int mid;

        while (a <= b) {
            mid = a + (b - a) / 2;

            if (nums[mid] > target) {
                b = mid - 1;
            }
            else if (nums[mid] < target) {
                a = mid + 1;
            }
            else {
                return mid;
            }

        }
        return a;
    }
};