#include "BurnableBarrel.hpp"

BurnableBarrel::BurnableBarrel():Burnable(), Damageable(){
}

BurnableBarrel::BurnableBarrel(int hp):Burnable(),Damageable(hp){}

void BurnableBarrel::takeDamage(int a, string s){
    if(!isDestroyed()){
        if(s=="fire"){
            burn();
        } else if (s=="water"){
            watered();
        }

        if(Burnable::isBurned()){
            Damageable::takeDamage(a*multiplier);
        } else {
            Damageable::takeDamage(a);
        }
    }
}