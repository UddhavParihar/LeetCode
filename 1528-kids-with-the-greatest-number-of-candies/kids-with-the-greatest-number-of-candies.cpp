class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int lar = 0;
        for(int i = 0;i<candies.size();i++){
            if(candies[i]>lar){
                lar = candies[i];
            }
        }

        for(int i = 0;i<candies.size();i++){
            if(candies[i]+extraCandies>=lar){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }

        return ans;
    }
};