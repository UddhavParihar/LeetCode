class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int copy = num;
        int digit;
        while(num>0){
            digit = num % 10;
            if(copy%digit==0){
                count = count + 1;
            }
            num = num/10;
        }
        return count;
    }
};