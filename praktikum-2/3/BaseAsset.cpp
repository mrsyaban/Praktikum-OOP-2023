#include "Asset.hpp"
#include "BaseAsset.hpp"

BaseAsset::BaseAsset(double buyValue) {
  this->buyValue = buyValue;
}

double BaseAsset::getValue(int years) {
  return this->buyValue;
}