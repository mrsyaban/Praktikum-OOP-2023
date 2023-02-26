#include "BurnableBarrel.hpp"

BurnableBarrel::BurnableBarrel(){}

BurnableBarrel::BurnableBarrel(int health) : Damageable(health) {}

void BurnableBarrel::takeDamage(int damage, string element){
    if (!isDestroyed()){
        if (element == "fire"){
            Burnable::burn();
        } else if (element == "water"){
            Burnable::watered();
        }

        if (isBurned()){
            Damageable::takeDamage(damage*2);
        }else{
            Damageable::takeDamage(damage);
        }
    }
}