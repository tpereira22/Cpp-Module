#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap    clapTrap("clapTrap");
    ScavTrap    scavTrap("scavTrap");
    FragTrap    fragTrap("fragTrap");
    std::cout << std::endl;
    DiamondTrap diamondTrap("diamondTrap");
    std::cout << std::endl;

    std::cout << std::endl;
    
    clapTrap.attack("Ze");
    scavTrap.attack("Ze");
    fragTrap.attack("Ze");
    diamondTrap.attack("Ze");
    std::cout << std::endl;
    
    clapTrap.takeDamage(5);
    scavTrap.takeDamage(5);
    fragTrap.takeDamage(5);
    diamondTrap.takeDamage(5);
    std::cout << std::endl;
    
    clapTrap.beRepaired(2);
    scavTrap.beRepaired(2);
    fragTrap.beRepaired(2);
    diamondTrap.beRepaired(2);
    std::cout << std::endl;
    
    scavTrap.guardGate();
    fragTrap.highFivesGuys();
    std::cout << std::endl;
    
    diamondTrap.guardGate();
    diamondTrap.highFivesGuys();
    std::cout << std::endl;

    diamondTrap.whoAmI();
    std::cout << std::endl;
}