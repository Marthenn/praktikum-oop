#include "BurnableBarrel.hpp"
#include "ExplodableBarrel.hpp"

int main(){
    BurnableBarrel bb(150);
    bb.takeDamage(5,"fire");
    bb.takeDamage(5,"earth");
    bb.takeDamage(5,"water");

    ExplodableBarrel eb(1,300);
    eb.takeDamage(15,"oke");
    return 0;
}