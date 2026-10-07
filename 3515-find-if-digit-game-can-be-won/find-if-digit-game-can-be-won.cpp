class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sin = 0;
        int doub = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<10){
                sin = sin + nums[i];
            }else{
                doub = doub + nums[i];
            }
        }

        if(sin == doub){
            return false;
        }else{
            return true;
        }
        
    }
};