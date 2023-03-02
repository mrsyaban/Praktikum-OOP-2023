#include <iostream>
using namespace std;
void func(int a){
    if (a == 0){
        throw 6;
    }
}

int main(){
    try{
        func(0);
        cout << 8;;
    } catch (int e){
        cout << 9;
    }
    cout << 10;
}