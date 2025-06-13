# include "inc/Animal.hpp"
# include "inc/Dog.hpp"
# include "inc/Cat.hpp"
# include "inc/WrongAnimal.hpp"
# include "inc/WrongCat.hpp"

int main()
{
    Animal *milu = new Dog();
    Animal *lincon = new Cat();
    std::cout << std::endl;

    milu->makeSound ();
    lincon->makeSound ();
    
    std::cout << std::endl;
    delete milu;
    delete lincon;
    return 0;
}