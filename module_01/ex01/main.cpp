#include "Zombie.hpp"

int	main(){

	int	N = 13;

	Zombie *zombie = zombieHorde(N, "zomzom");
	delete [] zombie;
}