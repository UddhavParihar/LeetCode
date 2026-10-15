class Solution {
public:
    int mirrorDistance(int n) {
        int reverse = 0;
        int x = n;

        while(x>0){
            int last = x%10;
            reverse = last + (reverse*10);
            x = x/10;
        }

        return abs(n-reverse);
    }
};