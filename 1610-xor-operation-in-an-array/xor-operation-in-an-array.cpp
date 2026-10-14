class Solution {
public:
    int xorOperation(int n, int start) {
        int xr = 0;
        for(int i =start;i<(n*2)+start;i=i+2){
            xr = xr  ^ i;

        }
        return xr;

    }
};