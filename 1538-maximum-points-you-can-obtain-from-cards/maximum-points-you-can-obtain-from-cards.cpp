class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l = k-1;
        int r = cardPoints.size()-1;
        int sum = 0;
        int ma;

        for(int i = 0;i<=l;i++){
            sum = sum + cardPoints[i];
        }
        
        ma = sum;

        while(l>=0){
            sum = sum - cardPoints[l];
            l--;
            sum = sum + cardPoints[r];
            r--;
            
            ma = max(sum,ma);
        }

        return ma;

    }
};