#include "BaseAsset.hpp"
#include "AppreciatingAsset.hpp"
#include "DepreciatingAsset.hpp"

#include <iostream>
using namespace std;

int main(){
    DepreciatingAsset anjay;
    cout << anjay.x->getValue(0);
}