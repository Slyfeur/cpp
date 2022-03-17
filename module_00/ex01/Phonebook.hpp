#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class Phonebook
{
	public:
		// Constructor & Destructor
		Phonebook();
		~Phonebook();

		//Function no member
		static int	getNbContact();

		// Getter
		Contact	getContact(int _nbContact);
		// Setter
		void	setContact(Contact contact);

	private:
		Contact		_contact[8];
		static int	_nbContact;
};


#endif