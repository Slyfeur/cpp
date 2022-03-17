#include "Zombie.hpp"

int	main(){

	Zombie Zombie1("Zogzog");
	Zombie1.announce();
	Zombie *Zombie2 = newZombie("Shlagevuk");
	Zombie2->announce();
	randomChump("Akalaglouglou");
	delete Zombie2;
}