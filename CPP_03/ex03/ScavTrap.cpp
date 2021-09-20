#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){

};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) //prende anche il costruttore della classe madre
{
    std::cout << "Scav Trap " << name <<  " initialized" << std::endl;
    this->_name = name;
    set_hitpoints(100);
    set_energy_points(50);
    this->_attack_damage = 20;
};


void ScavTrap::attack(std::string const & target){
    std::cout << "Scav Trap " << _name << " attacks " << target << std::endl;
    _energy_points -= 1;
    std::cout << "Now " << _name << " has " << _energy_points << " energy points left" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "Scav Trap " << _name << " has been destroyed " << std::endl;
}

void    ScavTrap::guardGate(){
    std::cout << "Scav Trap " << _name << " has entered in Gate keeper mode" << std::endl;
}
