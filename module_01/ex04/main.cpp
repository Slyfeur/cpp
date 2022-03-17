# include <string>
# include <iostream>
# include <fstream>

std::string	replace(std::string str, std::string s1, std::string s2)
{
	size_t	i;

	i = str.find(s1);
	while (i != (size_t)-1)
	{
		str.erase(i, s1.length());
		str.insert(i, s2);
		i = str.find(s1);
	}
	return (str);
}

int	main (int argc, char **argv)
{
	if (argc == 4)
	{
		std::string		filename(argv[1]);
		std::string		s1(argv[2]);
		std::string		s2(argv[3]);
		std::ifstream	ifs(filename);
		std::ofstream	ofs;

		if (ifs.good())
		{
			ofs.open(filename.append(".replace"));
			if (ifs.good() && ofs.good())
			{
				std::string str;
				std::string str2;
				while (getline(ifs, str))
				{
					str2 = replace(str, s1, s2);
					ofs << str2 << std::endl;
				}
			}
			ifs.close();
			ofs.close();
		}
		else
		{
			std::cout << std::strerror(errno) << std::endl;
		}
	}
	else
		std::cout << "Wrong number of arguments, please enter: ./Replace <filename> <s1> <s2>" << std::endl;
}