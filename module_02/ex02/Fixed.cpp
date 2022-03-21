#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const val) {

	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = (val << _bit);
}

Fixed::Fixed(float const val) {

	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = int(roundf(val * (1 << _bit)));
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed &	Fixed::operator=(Fixed const & rhs) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const {

	//std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {

	o << rhs.toFloat();
	return o;
}

float	Fixed::toFloat( void ) const {

	return ((float)this->_fixedPoint / (1 << this->_bit));
}

int		Fixed::toInt( void ) const {

	return this->_fixedPoint >> this->_bit;
}
