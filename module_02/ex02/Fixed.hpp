#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	public:

		// Line 12 to 17 for cannonical form //
		// Constructor & Destructor //
		Fixed();
		Fixed(Fixed const & src);
		~Fixed();

		// Operator overload //
		Fixed &	operator=(Fixed const & rhs);
		Fixed	operator+(Fixed const & rhs);
		Fixed	operator-(Fixed const & rhs);
		Fixed	operator*(Fixed const & rhs);
		Fixed	operator/(Fixed const & rhs);

		// Constructor //
		Fixed(int const val);
		Fixed(float const val);

		// Function member //
		bool	operator>(Fixed const & rhs);
		bool	operator<(Fixed const & rhs);
		bool	operator>=(Fixed const & rhs);
		bool	operator>=(Fixed const & rhs);
		bool	operator==(Fixed const & rhs);
		bool	operator!=(Fixed const & rhs);

		// Getter & Setter //
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static int	max(int a, int b);

	private:

		int	_fixedPoint;
		static int	const _bit = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif