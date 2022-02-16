#include <iostream>

int	main(int argc, char **argv)
{
	int	i = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (--argc)
		{
			for (int j = 0; argv[i][j] != 0; j++)
			{
				if (argv[i][j] >= 97 && argv[i][j] <= 122)
					argv[i][j] -= 32;
			}
			std::cout << argv[i];
			i++;
		}
	}
	std::cout << std::endl;
	return 0;
}