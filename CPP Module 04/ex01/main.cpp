#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // const int numAnimals = 6;
    // Animal* animalArray[numAnimals];

    // // Create and fill the array of Animal objects
    // for (int i = 0; i < numAnimals / 2; ++i) {
    //     animalArray[i] = new Dog();
    //     // system("leaks Polymorphism");
    // }

    // for (int i = numAnimals / 2; i < numAnimals; ++i) {
    //     animalArray[i] = new Cat();
    // }
    // // Loop over the array and delete every Animal
    // // for (int i = 0; i < numAnimals; ++i) {
    // //     delete animalArray[i];
    // // }

    Dog arr;
    std::cout << "line\n";
    Dog brr(arr);
    std::cout << "line\n";
    Animal ss = arr;;


    return 0;
}
