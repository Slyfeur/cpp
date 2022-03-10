#include "Phonebook.hpp"

Phonebook::Phonebook() {

	return;
}

Phonebook::~Phonebook() {

	return;
}

Contact Phonebook::getContact(int _nbContact) {

	return (this->_contact[_nbContact]);
}

int	Phonebook::getNbContact() {

	return Phonebook::_nbContact;
}

void	Phonebook::setcontact(Contact contact) {

	if (_nbContact == 8)
		std::cout << "Sorry, your Phonebook is full." << std::endl;
	else {
		this->_contact[this->_nbContact] = contact;
		_nbContact++;
	}
}

int	Phonebook::_nbContact = 0;
