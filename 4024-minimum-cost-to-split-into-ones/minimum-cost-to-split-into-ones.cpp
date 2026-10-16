class Solution {
public:
    int minCost(int n) {
        int a = 0;
        int b = 0;
        int cost = 0;

        while(n>1){
            a = n-1;
            b = 1;
            cost = cost + (a*b);
            n = a;

        }

        return cost;
    }
};