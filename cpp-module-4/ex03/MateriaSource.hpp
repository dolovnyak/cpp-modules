#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource& materiaSource);
	MateriaSource& operator=(const MateriaSource& materiaSource);
	~MateriaSource();
	
	void learnMateria(AMateria* materia);
	AMateria* createMateria(const std::string& type);

private:
	AMateria* _materias[4];
	
	void deleteMaterias();
};



