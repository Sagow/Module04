#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "Character.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"

class AMateria
{

	public:

		AMateria();
		AMateria( AMateria const & src );
		~AMateria();
		AMateria &		operator=( AMateria const & rhs );

		AMateria(std::string const & type);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:

		std::string	_type;

};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif /* ******************************************************** AMATERIA_H */