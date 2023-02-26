#include "Tool.hpp"
#include "ReinforcedAxe.hpp"
#include "Pickaxe.hpp"
#include <iostream>

int main(){
    Pickaxe* pickaxe1 = new Pickaxe();
    pickaxe1->use();
    pickaxe1->enchant();

    Pickaxe pickaxe2 =  (*pickaxe1);

    Pickaxe pickaxe3;
    pickaxe2 = pickaxe3;

    // reinforced
    ReinforcedAxe* rein1 = new ReinforcedAxe();
    rein1->use();
    ReinforcedAxe* rein2 = new ReinforcedAxe(*rein1);
    rein1->enchant();
    ReinforcedAxe rein3(*rein1+*rein1);
    rein3.repair();
    delete rein2;
    delete rein1;
}