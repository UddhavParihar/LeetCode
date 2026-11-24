class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l = 0;
        int r = k-1;
        int diff = nums[r]-nums[l];
        int mi = diff;

        while(r<nums.size()-1){
            l++;
            r++;
            diff = nums[r]-nums[l];
            mi = min(diff,mi);
        }

        return mi;

    }
};