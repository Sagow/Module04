#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.cpp"
#include "WrongCat.cpp"


int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const Animal* k = new Animal("canari");
const WrongAnimal* w_meta = new WrongAnimal();
const WrongAnimal* w_i = new WrongCat();


std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
k->makeSound();

std::cout << w_i->getType() << " " << std::endl;
std::cout << w_meta->getType() << " " << std::endl;
w_i->makeSound(); //will NOT output the cat sound!
w_meta->makeSound();

return 0;
}