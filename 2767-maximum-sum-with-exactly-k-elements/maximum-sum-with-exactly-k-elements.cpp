class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int lar = 0;
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>lar){
                lar = nums[i];

            }
        }

        for(int i = 0;i<k;i++){
            count = count + lar;
            lar = lar + 1;
        }

        return count;

        
    }
};