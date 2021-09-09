#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) //prende anche il costruttore della classe madre
{
    std::cout << "Scav Trap " << name <<  " initialized" << std::endl;
    _name = name;
    _hitpoints = 100;
    _energy_points = 50;
    _attack_damage = 20;
};


void ScavTrap::attack(std::string const & target){
    std::cout << "Scav Trap " << _name << " attacks " << target << std::endl;
    _energy_points -= 1;
    std::cout << "Now " << _name << " has " << _energy_points << " energy points left" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "Scav Trap " << _name << " is being destroyed " << std::endl;
}

void    ScavTrap::guardGate(){
    std::cout << "Scav Trap " << _name << " has entered in Gate keeper mode" << std::endl;
}