#include "ExplodableBarrel.hpp"


ExplodableBarrel::ExplodableBarrel() : Damageable(1){
    this->radius = 5;
}

ExplodableBarrel::ExplodableBarrel(int radius, int baseDamage): Damageable(1), Explodable(baseDamage) {
    this->radius = radius;
}

void ExplodableBarrel::takeDamage(int damage, string element){
    if(!isDestroyed()){
        Damageable::takeDamage(damage);
        if (isDestroyed()){
            explode(this->radius);
        }
    }
}