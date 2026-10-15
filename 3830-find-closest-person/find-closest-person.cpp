class Solution {
public:
    int findClosest(int x, int y, int z) {
        int tx = x;
        int ty = y;
        if(x<z){
            tx = z - x;
        }
        if(x>z){
            tx = x - z;
        }
        if(y<z){
            ty = z - y;
        }
        if(y>z){
            ty = y - z;
        }

        if(x==z){
            tx = 0;
        }
        if(y==z){
            ty = 0;
        }




        if(tx>ty){
            return 2;
        }else if(tx==ty){
            return 0;
        }else{
            return 1;
        }

    }
};