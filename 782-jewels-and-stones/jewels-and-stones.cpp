class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int hash[256] = {0};
        int count = 0;

        for(int i = 0;i<jewels.length();i++){
            hash[jewels[i]]++;
        }

        for(int i = 0;i<stones.length();i++){
            if(hash[stones[i]]==1){
                count = count + 1;
            }
        }

        return count;
    }
};