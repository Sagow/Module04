#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "Character.hpp"
# include "AMateria.hpp"
# include "Cure.hpp"
# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"

class Ice : AMateria
{

	public:

		Ice();
		Ice( Ice const & src );
		~Ice();

		Ice &		operator=( Ice const & rhs );

		void use(ICharacter& target);

	private:

};

std::ostream &			operator<<( std::ostream & o, Ice const & i );

#endif /* ************************************************************* ICE_H */