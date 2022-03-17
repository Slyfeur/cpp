#include "Karen.hpp"

int main() {

	Karen Karen;

	std::cout << "'DEBUG'" << std::endl;
	Karen.complain("DEBUG");
	std::cout << "'INFO'" << std::endl;
	Karen.complain("INFO");
	std::cout << "'WARNING'" << std::endl;
	Karen.complain("WARNING");
	std::cout << "'ERROR'" << std::endl;
	Karen.complain("ERROR");
	Karen.complain("test");
}