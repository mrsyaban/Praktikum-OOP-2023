#include "AppreciatingAsset.hpp"
#include "BaseAsset.hpp"
#include <cmath>    

double AppreciatingAsset::getValue(int years){
    return x->getValue(0) * pow((1 + rate),years);
}