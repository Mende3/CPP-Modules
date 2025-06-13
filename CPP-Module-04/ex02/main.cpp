# include "inc/Animal.hpp"
# include "inc/Dog.hpp"
# include "inc/Cat.hpp"
# include "inc/WrongAnimal.hpp"
# include "inc/WrongCat.hpp"

int main()
{
    //const Animal* a = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    i->makeSound();
    j->makeSound();

    delete i;
    delete j;   

  return 0;
}