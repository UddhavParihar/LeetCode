class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int count = 0;

        if(nums.size() == 1){
            return 1;
        }


        for(int i = 0;i<nums.size();i++){
            if(i == 0){
                if(nums[i+1] <=nums[i]){
                    count = count + 1;
                }
            }else if(i == nums.size()-1){
                if(nums[i-1] <=nums[i]){
                    count = count + 1;
                }
            }else{
                if(2LL * nums[i]>= (long long)nums[i+1]+nums[i-1]){
                    count = count + 1;
                }
            }
        }

        return count;
        
    }
};