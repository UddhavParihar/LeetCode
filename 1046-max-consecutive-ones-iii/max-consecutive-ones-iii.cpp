class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int count = 0;
        int ma = INT_MIN;

        while(r<nums.size()){
            if(nums[r]==0){
                count = count + 1;
                if(count>k){
                    while(count>k){
                        if(nums[l]==0){
                            count = count - 1;
                            l++;
                        }else{
                            l++;
                        }
                    }
                }
                
            }

            r++;

            ma = max(ma,(r-l));


        }

        if(ma == INT_MIN){
            return 0;
        }else{
            return ma;
        }

        
    }
};