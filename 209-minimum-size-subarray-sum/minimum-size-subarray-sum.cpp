class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int r = 0;
        long long sum = 0;
        int mi = INT_MAX;

        while(r<nums.size()){
            sum = sum + nums[r];
            while(sum>=target){
                mi = min(mi,(r-l+1));
                sum = sum - nums[l];
                l++;

            }if(sum<target){
                r++;
                
            }
        }
        if(mi == INT_MAX){
            return 0;
        }else{
            return mi;
        }
        
    }
};