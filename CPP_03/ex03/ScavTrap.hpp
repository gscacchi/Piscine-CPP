#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap:virtual public ClapTrap{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        void attack(std::string const & target);
        void guardGate();

        int get_energypoints(void);
        void set_energypoints(int n);
};



#endif