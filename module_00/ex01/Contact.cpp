#include "Contact.hpp"

Contact::Contact() {

	return;
}

Contact::~Contact() {

	return;
}

std::string Contact::getFirstName() const {

	return this->_firstName;
}

std::string Contact::getLastName() const {

	return this->_lastName;
}

std::string Contact::getNickName() const {

	return this->_nickName;
}

std::string Contact::getPhoneNumber() const {

	return this->_phoneNumber;
}

std::string Contact::getSecret() const {

	return this->_secret;
}

void Contact::setFirstName(std::string firstName) {

	this->_firstName = firstName;
	return;
}

void Contact::setLastName(std::string lastName) {

	this->_lastName = lastName;
	return;
}

void Contact::setNickName(std::string nickName) {

	this->_nickName = nickName;
	return;
}

void Contact::setPhoneNumber(std::string phoneNumber) {

	this->_phoneNumber = phoneNumber;
	return;
}

void Contact::setSecret(std::string secret) {

	this->_secret = secret;
	return;
}
