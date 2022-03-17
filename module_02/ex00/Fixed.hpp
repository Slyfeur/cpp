#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:

		// Line 12 to 17 for cannonical form //
		// Constructor & Destructor //
		Fixed();
		Fixed(Fixed const & src);
		~Fixed();

		// Operator overload //
		Fixed &	operator=(Fixed const & rhs);

		// Getter & Setter //
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:

		int	_fixedPoint;
		 static int	const _bit = 8;
};

#endif