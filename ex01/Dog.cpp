#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("Dog")
{
	_brain = new Brain;
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog( const Dog & src )
{
	_brain = new Brain;
	for (int i = 0; i < 100; i++)
		_brain[i] = src._brain[i];
	std::cout << "Dog copy constructor" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &		Dog::operator=( Dog const & rhs )
{
	_type = rhs._type;
	_brain = rhs._brain;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound() const
{
	std::cout << "Whouaf (promenade)" << std::endl;
}

void	Dog::print_ideas()
{
	std::cout << _brain << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */