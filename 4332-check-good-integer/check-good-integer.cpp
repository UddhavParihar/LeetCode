class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum = 0;
        int sums = 0;
        while(n>0){
            int last = n%10;
            sum = last + sum;
            sums = sums + (last*last);
            n=n/10;

        }

        int ans = sums - sum;

        if (ans>=50){
            return true;
        }else{
            return false;
        }


    }
};