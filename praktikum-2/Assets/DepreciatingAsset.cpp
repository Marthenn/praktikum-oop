#include "DepreciatingAsset.hpp"
#include "math.h"

double DepreciatingAsset::getValue(int years){
    double a = 1;
    for(int i = 0 ; i < years; i++){
        a*=(1-rate);
    }
    return this->x->getValue(years)*a;
}