class Solution {
public:
    int findTheWinner(int n, int k) {
        int winner = 0;

        for(int i = 1; i <= n; i++){
            winner = (winner + k) % i;
        }

        return winner + 1;
    }
};



















// class Solution {
// public:
//     int findTheWinner(int n, int k) {
//         vector<int> vec;
//         int count = 0;
//         int j = 0;

//         for(int i = 1; i <= n; i++){
//             vec.push_back(i);
//         }

//         while(vec.size() != 1){
//             count++;

//             if(count == k){
//                 count = 0;
//                 vec.erase(vec.begin() + j);

//                 if(j == vec.size()){
//                     j = 0;
//                 }
//             }
//             else{
//                 j++;
//                 if(j == vec.size()){
//                     j = 0;
//                 }
//             }
//         }

//         return vec[0];
//     }
// };