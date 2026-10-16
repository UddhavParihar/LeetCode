class Solution {
public:
    int totalMoney(int n) {
        int mon = 0;
        int ans = 0;
        int count = 0;
        for(int i = 1;i<=n;i++){
            if(i%7==1){
                mon = mon + 1;
                count = mon;
                ans = ans + count;


            }else{
                count = count + 1;
                ans = ans + count;
            }
        }

        return ans;
        
    }
};