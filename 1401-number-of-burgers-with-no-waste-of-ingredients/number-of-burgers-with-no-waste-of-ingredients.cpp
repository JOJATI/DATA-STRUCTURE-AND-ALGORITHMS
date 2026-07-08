class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        
        if(tomatoSlices&1){
            return {};
        }
        int x= (4*cheeseSlices-tomatoSlices)/2;
        int y= cheeseSlices-x;
        if(x<0|| y<0){
            return {};
        }
        return {y,x};

    }
};