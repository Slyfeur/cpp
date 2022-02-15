#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		++argv;
		while (--argc)
		{
			std::string str(*argv);
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			std::cout << str;
			argv++;
		}
	}
	std::cout << std::endl;
	return 0;
}