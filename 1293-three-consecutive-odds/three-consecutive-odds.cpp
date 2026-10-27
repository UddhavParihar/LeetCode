class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        int lar = 0;
        for(int i = 0;i<arr.size();i++){
            if(arr[i]%2!=0){
                count = count + 1;
            }
            if(arr[i]%2==0){
                if(count>lar){
                    lar = count;
                }
                count = 0;
            }

            if(count>lar){
                    lar = count;
                }


        }

        if(lar>=3){
            return true;
        }

        return false;
    }
};