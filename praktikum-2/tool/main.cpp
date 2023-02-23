#include "Pickaxe.hpp"
#include "ReinforcedAxe.hpp"

int main() {
  static Pickaxe p1;
  p1.use();
  p1.enchant();
  static Pickaxe p2(p1);
  Pickaxe*p3 = new Pickaxe;
  p3->operator=(p1);

  ReinforcedAxe ra1;
  ra1.use();
  // tool crafted! 3 4
  // reinforced axe crafted! 3 4
  // chip chop chip chop! 3 4
  
  ReinforcedAxe ra2(ra1);
  ra2.enchant();
  // tool crafted! 3 4
  // reinforced axe copy crafted! 3 4
  // reinforced axe's grip enchanted! 3 4
  
  static ReinforcedAxe ra3 = ra1+ra1;
  // tool crafted! 3 4
  // reinforced axe copy crafted! 3 4
  // reinforcing axe! 6 8
  // tool crafted! 6 8
  // reinforced axe copy crafted! 6 8
  
  ra3.repair();
  // reinforced axe is repaired! 6 8
  
  // reinforced axe destroyed! 3 4
  // tool destroyed! 3 4
  // reinforced axe destroyed! 3 4
  // tool destroyed! 3 4
  // reinforced axe destroyed! 6 8
  // tool destroyed! 6 8
}