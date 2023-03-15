#include <iostream>
#include "Truckloads.h"
int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates<2 || numCrates>10000) {
        return -1;
    }else if(loadSize<1 || loadSize>(100000)){
        return -1;
    }

    if(numCrates <= loadSize){
        return 1;
    }
    if(numCrates % 2 == 0){
        return numTrucks(numCrates/2,loadSize)+numTrucks(numCrates/2,loadSize);
    }else{
        return numTrucks(numCrates/2,loadSize)+numTrucks((numCrates/2)+1,loadSize);
    }
}