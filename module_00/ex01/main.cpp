#include "Contact.hpp"
#include "Phonebook.hpp"

void	addcontact(Phonebook *Phonebook) {

	Contact contact;
	std::string str;

	std::cout << "What's his first name? ";
	while (!std::getline(std::cin, str) || str == "")
		std::cout << "What's his first name? ";
	contact.setFirstName(str);
	std::cout << "What's his last name? ";
	while (!std::getline(std::cin, str) || str == "")
		std::cout << "What's his last name? ";
	contact.setLastName(str);
	std::cout << "What's his nick name? ";
	while (!std::getline(std::cin, str) || str == "")
		std::cout << "What's his nick name? ";
	contact.setNickName(str);
	std::cout << "What's his phone number? ";
	while (!std::getline(std::cin, str) || str == "")
		std::cout << "What's his phone number? ";
	contact.setPhoneNumber(str);
	std::cout << "What's his darkest secret? ";
	while (!std::getline(std::cin, str) || str == "")
		std::cout << "What's his darkest secret? ";
	contact.setSecret(str);
	Phonebook->setcontact(contact);
	std::cout << std::endl;
	return;
}

std::string	trunc(std::string str) {

	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	searchcontact(Phonebook *Phonebook) {

	int index;

	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│" << std::setw(10) << std::left << "Index";
	std::cout << "|" << std::setw(10) << std::left << "First name";
	std::cout << "|" << std::setw(10) << std::left << "Last name";
	std::cout << "|" << std::setw(10) << std::left << "Nick name" << "|" << std::endl;
	for (int i = 0; i < Phonebook->getNbContact(); i++) {
		std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
		std::cout << "|" << std::setw(10) << std::left << i + 1;
		std::cout << "|" << std::setw(10) << std::left << trunc(Phonebook->getContact(i).getFirstName());
		std::cout << "|" << std::setw(10) << std::left << trunc(Phonebook->getContact(i).getLastName());
		std::cout << "|" << std::setw(10) << std::left << trunc(Phonebook->getContact(i).getNickName()) << "|" << std::endl;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
	if (Phonebook->getNbContact() > 0) {
		std::cout << "Choose the contact index: ";
		while (!(std::cin >> index) || index > Phonebook->getNbContact() || index < 1) {
			std::cout << "Your choice is not a good number, choose one between 1 and " << Phonebook->getNbContact() << ".\nChoose the contact index: ";
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		index--;
		std::cout << std::endl;
		std::cout << "First name : " << Phonebook->getContact(index).getFirstName() << std::endl; 
		std::cout << "Last name : " << Phonebook->getContact(index).getLastName() << std::endl;
		std::cout << "Nick name : " << Phonebook->getContact(index).getNickName() << std::endl;
		std::cout << "Phone number : " << Phonebook->getContact(index).getPhoneNumber() << std::endl;
		std::cout << "Darkest secret : " << Phonebook->getContact(index).getSecret() << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	else
		std::cout << "Sorry, your Phonebook is empty." << std::endl;
	std::cout << std::endl;
	return;
}

int	main() {

	Phonebook phonebook;
	while (1)
	{
		std::cout << "ADD    : add a contact" << std::endl;
		std::cout << "SEARCH : search a contact" << std::endl;
		std::cout << "EXIT   : exit from the program" << std::endl;
		std::string command;
		std::getline(std::cin, command);
		std::cout << std::endl;
		if (command == "ADD")
			addcontact(&phonebook);
		else if (command == "SEARCH")
			searchcontact(&phonebook);
		else if (command == "EXIT")
			break;
	}
	return 0;
}
