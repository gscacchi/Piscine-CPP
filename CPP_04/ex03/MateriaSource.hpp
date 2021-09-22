#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *recipes[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource & src);
	~MateriaSource();

	void learnMateria(AMateria* amateria);
	AMateria* createMateria(std::string const & type);

	MateriaSource & operator=(MateriaSource const & rhs);
};

#endif