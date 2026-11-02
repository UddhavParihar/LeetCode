class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int count = 0;
        int ans = 0;
        int sum = 0;
        sort(nums.begin(),nums.end());

        
        int mid = nums[nums.size()/2];

        for(int i = 0;i<nums.size();i++){
            if(nums[i]>mid){
                ans = ans + (nums[i]-mid);
            }else if(nums[i]<mid){
                ans = ans + (mid - nums[i]);
            }
        }

        return ans;
    }
};