#include "Polinom.hpp"
#include <iostream>
using namespace std;

int main(){
    Polinom a(3);
    a.setKoefAt(0, 1);
    a.setKoefAt(1, 1);
    a.setKoefAt(2, 1);
    cout << a.getDerajat() << endl;
    a.print();
}