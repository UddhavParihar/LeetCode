class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = 0;
        int r = 0;
        int count = 0;
        int len = 0;
        int ma = INT_MIN;

        while(r<nums.size()){
            if(nums[r]==1){
               // r++;
            }else if(nums[r]==0){
                count = count + 1;
                if(count>1){
                    while(count>1){
                        if(nums[l]==0){
                            count--;
                            l++;
                        }else{
                            l++;
                        }
                    }
                }
            }

            r++;

            ma = max(ma,(r-l+1));
        }

        if(ma == INT_MIN){
            return 0;
        }else{
            return ma-2;
        }
    }
};