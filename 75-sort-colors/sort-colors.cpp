class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z = 0;
        int o = 0;
        int t = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]== 0){
                z = z + 1;
            }else if(nums[i]==1){
                o = o + 1;
            }else{
                t = t + 1;
            }



        }

        for(int j = 0;j<nums.size();j++){
            if(z != 0){
                nums[j] = 0;
                z--;
            }else if(z == 0){
                if(o != 0){
                    nums[j] = 1;
                    o--;
                }else if(o == 0){
                    if(t != 0){
                        nums[j] = 2;
                        t--;
                    }else if(t == 0){
                        return;
                    }
            
                }
            }

        }

        
    }
};