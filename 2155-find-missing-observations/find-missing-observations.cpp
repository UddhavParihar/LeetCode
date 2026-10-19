class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int count = 0;
        int un = 0;
        int tot = rolls.size()+n;
        int uncount = 0;
        vector<int> ans;
        for(int i = 0;i<rolls.size();i++){
            count = count + rolls[i];
        }

        un = (mean*tot)-count;

        if (un < n || un > 6 * n) {
            return ans;
        }

        while(n!=0){
            if(un%n==0){
                ans.push_back(un/n);
                un = un - (un/n);
                n = n -1;
            }else if(un%n!=0){
                ans.push_back((un/n)+1);
                un = un - ((un/n)+1);
                n = n - 1;
            }
        }
        return ans;




    }
};