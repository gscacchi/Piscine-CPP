#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scav("Ostia");
    scav.attack("Paoletto");
    scav.takeDamage(5);
    scav.guardGate();
}