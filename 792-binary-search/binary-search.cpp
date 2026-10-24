class Solution {
public:
    int search(vector<int>& nums, int target) {
        int a = 0;
        int b = nums.size() - 1;

        while (a <= b) {
            int mid = a + (b - a) / 2;

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

        return -1;
    }
};