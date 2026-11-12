class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {

        int count = 0;

        for(int i=0;i<points.size()-1;i++){
            count = count + max(abs(points[i][0]-points[i+1][0]),abs(points[i][1]-points[i+1][1]));
        }

        return count;






        // int count = 0;
        // for(int i = 0;i<points.size()-1;i++){
        //     while(points[i][0] != points[i+1][0] || points[i][1] != points[i+1][1]){
        //         if(points[i][0] != points[i+1][0] && points[i][1] != points[i+1][1]){
        //             count = count +1;
        //             points[i][0] = points[i][0]+1;
        //             points[i][1] = points[i][1]+1;

        //         }
        //         if((points[i][0] != points[i+1][0])^(points[i][1] != points[i+1][1])){
        //             if(points[i][0]==points[i+1][0]){
        //                 count = count + 1;
        //                 points[i][1] = points[i][1]+1;
        //             }
        //             if(points[i][1]==points[i+1][1]){
        //                 count = count + 1;
        //                 points[i][0] = points[i][0]+1;
        //             }
        //         }
        //     }
        // }
        // return count;
    }
    
};