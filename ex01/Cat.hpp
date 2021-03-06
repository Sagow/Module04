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
		Cat &		operator=( Cat const & rhs );

		virtual void	makeSound() const;
		void			print_ideas();

	private:

		Brain	*_brain;

};

#endif /* ************************************************************* Cat_H */