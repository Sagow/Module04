#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal(std::string type);
		Animal( Animal const & src );
		~Animal();

		Animal &		operator=( Animal const & rhs );

		virtual void	makeSound() const;
		std::string	getType() const;

	protected:

		std::string	_type;

	private:

};

#endif /* ********************************************************** ANIMAL_H */