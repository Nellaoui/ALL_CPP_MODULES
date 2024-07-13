#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void alo()
{
	// const Animal *meta = new Animal();
	// const Animal *j = new Dog();
	// const Animal *i = new Cat();
	// // // Cat ag;
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); // will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	// delete meta;
	// delete i;
	// delete j;
	//////// Wrong Cat test ///////////////
	//   const WrongAnimal *animal = new WrongAnimal();
	  const WrongAnimal *Cat = new WrongCat();
	  std::cout << "WrongCat test\n" + Cat->getType() << " " << std::endl;
	  Cat->makeSound(); //will output the cat sound!
	  delete Cat;
	// return 0;
}

int main()
{
	alo();
	system("leaks Polymorphism");
}
