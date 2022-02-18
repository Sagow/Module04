#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		~Cat();

		virtual void	makeSound() const;

	private:

		Brain	*_brain;

};

#endif /* ************************************************************* Cat_H */