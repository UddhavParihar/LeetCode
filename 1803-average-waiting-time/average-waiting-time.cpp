class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long wait = 0;
        long long time = 0;
        int count = 0;
        int j = 0;

        for(int i = 0;i<customers.size();i++){
            count = count + 1;

            if(time<=customers[i][j]){
                time = customers[i][j];
                time = time + customers[i][j+1];
                wait = wait + (time - customers[i][j]);
                    
                }else if(time>customers[i][j]){
                    time = time + customers[i][j+1];
                    wait = wait +(time-customers[i][j]);


                }
            
        }

        return (double)wait/count;
    }
};