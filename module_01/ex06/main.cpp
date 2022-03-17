#include "Karen.hpp"

int main(int argc, char **argv) {

	Karen Karen;

	if (argc == 2)
	{
		std::string	str[4] = { 
		"DEBUG", "INFO", "WARNING", "ERROR"
		};
		int i = 0;
		while (argv[1] != str[i] && i < 4)
			i++;
		if (i == 4)
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		while (i < 4)
		{
			switch (i)
			{
				case 0:
						std::cout << "[ DEBUG ]" << std::endl;
						break;
				case 1:
						std::cout << "[ INFO ]" << std::endl;
						break;
				case 2:
						std::cout << "[ WARNING ]" << std::endl;
						break;
				case 3:
						std::cout << "[ ERROR ]" << std::endl;
						break;
				default:
						break;
			}
			Karen.complain(str[i]);
			std::cout << std::endl;
			i++;
		}
	}
}