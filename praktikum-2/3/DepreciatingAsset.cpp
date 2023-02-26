
#include "DepreciatingAsset.hpp"
#include "BaseAsset.hpp"
#include <cmath>

double DepreciatingAsset::getValue(int years){
    return x->getValue(0) * pow((1 - rate),years);
}