#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "Character.hpp"
# include "Ice.hpp"
# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"

class Cure : AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		~Cure();

		Cure &		operator=( Cure const & rhs );

		void	use(ICharacter& target);

	private:

};

std::ostream &			operator<<( std::ostream & o, Cure const & i );

#endif /* ************************************************************ CURE_H */