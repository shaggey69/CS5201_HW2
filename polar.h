/*! \file
 *
 * A Polar library.
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
 * \pre: Stream insertion operator is defined for `T`.
 * \post: The contents of the Polar are printed to the ouptut stream in 
 * format (*Polar length*, *Angle*)
 * \return: the modified output stream.
 *
 */
template<class T>
ostream& operator<< (ostream& out , const Polar<T> & p);


/*! A Polar.
 *
 * It's a Polar set.
 * m_r reprents the Pole (distance from (0,0))
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
	   * \post: A new Polar is created with length and angle equel zero
	   *
	   */

		Polar();
		
		/*! initialize Constructer
		   *
		   * \post A new Polar is created with length and angle equel 
		   *	to r and theat 
		   *
	   */

    Polar(const T r, const T theta);

	   /*! copy Constructer
	   *
	   * \post A new Polar is created with length and angle equel 
	   *	to the Source Polar 
	   *
	   */

    Polar(const Polar<T>& source);

    //! Destructor
    ~Polar();

		/*! copy Constructer
	   *
	   * \post A new Polar is created with length and angle equel 
	   *	to the Source Polar 
	   *
	   */
    Polar<T>& operator= (const Polar<T>& rhs);
   	T operator[](const int i) const;

    bool operator<(const Polar<T>& rhs) const;
    bool operator>(const Polar<T>& rhs) const;
    bool operator==(const Polar<T>& rhs) const;
    bool operator!=(const Polar<T>& rhs) const;

    Polar<T> operator-() const;
    Polar<T> operator* ( const Polar<T>& rhs) const;
    Polar<T> operator/ ( const Polar<T>& rhs) const;
    T operator~ () const;
    Polar<T> operator! () const;

    friend ostream& operator<< <T> (ostream& out , const Polar<T> & p);
    void print() const;

    T getR() const  {return m_r;}
    T getTheta() const {return m_theta;}
    void setR(const T r){m_r =r;}
    void setTheta(const T theta){m_theta =theta;}

};



#include "polar.hpp"
#endif
