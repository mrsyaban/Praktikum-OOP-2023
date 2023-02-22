#include "Weed.hpp"
using namespace std;

Weed ::Weed() {
    this->many = 1;
}

Weed ::Weed(int n) {
    if(1 <= n && n <= 100){
        this->many = n;
    }
}

Weed ::Weed(const Weed &b) {
    this->many = b.many;
}

Weed ::~Weed() {
}

void Weed ::step() {
    for (int i=0; i < many; i++){
        cout << "kresek...";
    }

    cout<<endl;
}