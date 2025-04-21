#include "Zombie.hpp"

int main ()
{
    Zombie zb ("Foo");
    Zombie* z1 = newZombie ("Ted");

    zb.announce ();
    z1->announce ();
    randomChump ("Bob");
    delete z1;
}