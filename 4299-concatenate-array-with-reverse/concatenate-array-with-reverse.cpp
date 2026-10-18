class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans;
        int b = nums.size();
        int a = nums.size();
        for(int i = 0;i<b*2;i++){
            if(i<nums.size()){
                ans.push_back(nums[i]);
            }else if(i>=nums.size()){
                ans.push_back(nums[a-1]);
                a = a-1;
                


            }
        }
        return ans;
    }
};