#include "Asset.hpp"

#include "AppreciatingAsset.hpp"
#include "BaseAsset.hpp"
#include "DepreciatingAsset.hpp"


AppreciatingAsset::AppreciatingAsset(Asset* x, double rate) {
  this->x = x;
  this->rate = rate;
}

DepreciatingAsset::DepreciatingAsset(Asset* x, double rate) {
  this->x = x;
  this->rate = rate;
}
