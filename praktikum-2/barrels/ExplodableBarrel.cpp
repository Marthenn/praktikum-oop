#include "ExplodableBarrel.hpp"

ExplodableBarrel::ExplodableBarrel() : Damageable(1), Explodable(){
    radius = 5;
}

ExplodableBarrel::ExplodableBarrel(int a, int b) : Damageable(1), Explodable(b){
    radius = a;
}

void ExplodableBarrel::takeDamage(int a, string s){
    if(!(Damageable::isDestroyed())){
        Damageable::takeDamage(a);
        if(Damageable::isDestroyed()){
            Explodable::explode(this->radius);
        }
    }
}