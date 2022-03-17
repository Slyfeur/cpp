#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	public:
		Weapon(std::string weapon);
		~Weapon();

		std::string getType() const;

		void	setType(std::string type);

	private:
		std::string _type;

};

#endif