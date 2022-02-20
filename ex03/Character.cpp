#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
}

Character::Character( const Character & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & Character::getName() const
{
	return (_name);
};

void Character::equip(AMateria* m)
{
	int	i = 0;
	while (i < 4 && _inventory[i])
		i++;
	if (i < 4)
		_inventory[i] = m;
};

void Character::unequip(int idx)
{
	int	i = idx;

	while (i < 3)
	{
		_inventory[i] = _inventory[i + 1];
		i++;
	}
	_inventory[i] = NULL;
};

void Character::use(int idx, ICharacter& target)
{
	_inventory[idx]->use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */