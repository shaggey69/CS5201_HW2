
/*! \file
 *
 * A Polar library.
 */

/*
header function for Polars
By: Ari Sherman
Class: CS5201 HW #2
Date: 2.12.18
*/
#ifndef POLAR_H
#define POLAR_H

#include <iostream>
#include <stdexcept>

using namespace std;

#ifndef DOXYGEN
template <typename T>
class Polar;
#endif

/*! Stream insertion operator for `Polar`.
 *
 * \pre Stream insertion operator is defined for `T`.
 * \post The contents of the Polar are printed to the ouptut stream in 
 * format (*Polar length*, *Angle*)
 * \return the modified output stream.
 *
 */
template<class T>
ostream& operator<< (ostream& out , const Polar<T> & p);


/*! A Polar.
 *
 * It's a Polar set.
 * m_r reprents R (distance from (0,0))
 * m_theata reprents the angel from (0,0)
 *
 */
template <typename T>
class Polar 
{
	private:
		T m_r;
		T m_theta;

	public:

		/*! Defult Constructer
		*
		* \post A new Polar is created with length and angle equel zero
		*
		*/

		Polar();

		/*! Initialize Constructer
		*
		* \post A new Polar is created with length and angle equel 
		* to given r and theta 
		*
		*/

		Polar(const T r, const T theta);

		/*! Copy Constructer
		*
		* \pre none
		* \post A new Polar is created with length and angle equel 
		*	to the Source Polar 
		*
		*/

		Polar(const Polar<T>& source);

		//! Destructor
		~Polar();

		/*! = assignment 
		*
		* \pre none
		* \post Calling object Polar's length and angle are equel 
		* to the Source Polar 
		*
		*/
		Polar<T>& operator= (const Polar<T>& rhs);

		/*! object getter []
		*
		* \param i MUST be 0 or 1
		* \pre none
		* \post Will return value of R for 0 and Theta for 1.
		* For non 0 or 1 function will defult return Theta.
		*
		*/

		T operator[](const int i) const;

		/*! Less then checkr 
		*
		* 
		* \pre T must have '<' defiend for it!
		* \post Will return true if R of calling object is
		* less then R of RHS. False otherwise.
		*
		*/
		bool operator<(const Polar<T>& rhs) const;


		/*! More then checkr 
		*
		* 
		* \pre T must have '>' defiend for it!
		* \post Will return true if R of calling object is
		* more then R of RHS. False otherwise.
		*
		*/
		bool operator>(const Polar<T>& rhs) const;

		/*! Is equel checkr 
		*
		* \pre T must have '==' defiend for it!
		* \post Will return true if R of calling object is
		* equel to R of RHS. False otherwise.
		*
		*/

		bool operator==(const Polar<T>& rhs) const;

		/*! Is Not equel checkr 
		*
		* \pre T must have '!=' defiend for it!
		* \post Will return true if R of calling object is
		* not equel to R of RHS. False otherwise.
		*
		*/

		bool operator!=(const Polar<T>& rhs) const;

		/*! '-' Operator
		*
		* 
		* \pre T must have '-' defiend for it!
		* \return A new Polar is created with same Theata as C.O
		* and with negated R as C.O
		* \post a new Polar is born!
		*/

		Polar<T> operator-() const;

		/*! * Operator
		*
		* 
		* \pre T must have '*' and '+' defiend for it!
		* \return  A new Polar is created with the following:
		*
		* r = r of CO * r of RHS
		*
		* theta = theat of C.O + theta of RHS
		*
		* \post a new Polar is born!
		*/

		Polar<T> operator* (const Polar<T>& rhs) const;

		/*! / Operator
		*
		* 
		* \pre T must have '/' and '-' defiend for it! r of RHS can not
		* be equel to 0!
		* \return A new Polar is created with the following: r,theta
		*
		* r = r of CO / r of RHS
		*
		* theta = theat of C.O - theta of RHS
		*
		* \post a new Polar is born!
		*/

		Polar<T> operator/ (const Polar<T>& rhs) const;

		/*! ~ Operator
		*
		* \pre T must have abs function defined for it!
		*	\return the magnitude of the Polar
		* \post none
		*/

		T operator~ () const;

		/*! ! Operator
		*
		* \pre T must have '-' defiend for it!
		* \return A new Polar is created with same R as C.O
		* and with negated Theata as C.O
		* \post a new Polar is born!
		*/

		Polar<T> operator! () const;

		/*! Stream insertion operator for `Polar`.
		*
		* \pre Stream insertion operator is defined for `T`.
		* \post The contents of the Polar are printed to the ouptut stream in 
		* format (*Polar length*, *Angle*)
		* \return the modified output stream.
		*
		*/

		friend ostream& operator<< <T> (ostream& out , const Polar<T> & p);

		/*! Get r
		*
		* \pre none
		* \post none
		* \return the r of the Polar
		*
		*/
		T getR() const  {return m_r;}

		/*! Get theta
		*
		* \pre none
		* \post none
		* \return the theta of the Polar
		
		*/
		T getTheta() const {return m_theta;}

		/*! Set r
		*
		* \pre none
		* \post m_r is modfied to r
		*/
		void setR(const T r){m_r =r;}

		/*! Set theta
		*
		* \pre none
		* \post m_theta is modfied to theta
		*/
		void setTheta(const T theta){m_theta =theta;}

};



#include "polar.hpp"
#endif
