#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource)
{
	*this = materiaSource;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materiaSource)
{
	if (this == &materiaSource)
		return *this;
	
	deleteMaterias();
	for (int i = 0; i < 4; i++)
	{
		if (materiaSource._materias[i] != nullptr)
			_materias[i] = materiaSource._materias[i]->clone();
	}
	
	return *this;
}

MateriaSource::~MateriaSource()
{
	deleteMaterias();
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == nullptr)
		{
			_materias[i] = materia;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] != nullptr && _materias[i]->getType() == type)
			return _materias[i]->clone();
	}
	
	return nullptr;
}

void MateriaSource::deleteMaterias()
{
	for (int i = 0; i < 4; i++)
		if (_materias[i] != nullptr)
			delete _materias[i];
}

