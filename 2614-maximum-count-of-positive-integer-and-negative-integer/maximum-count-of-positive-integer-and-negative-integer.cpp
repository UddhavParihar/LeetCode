class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0;
        int neg = 0;

        for(int i = 0;i<nums.size();i++){
            if(nums[i]>0){
                pos = pos + 1;
            }else if(nums[i]<0){
                neg = neg + 1;
            }
        }

        if(neg>pos){
            return neg;
        }

        return pos;
    }
};