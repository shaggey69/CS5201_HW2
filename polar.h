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
	* \post A new Polar is created with length and angle equel zero
	*
	*/

	Polar();
		
	/*! initialize Constructer
	*
	* \post A new Polar is created with length and angle equel 
	* to given r and theat 
	*
	*/

    Polar(const T r, const T theta);

   /*! copy Constructer
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
	* \to the Source Polar 
	*
	*/
    Polar<T>& operator= (const Polar<T>& rhs);

	/*! object grabber 
	*
	* \param i MUST be 0 or 1
	* \pre none
	* \post Will return value of R for 0 and Theta for 1.
	* for non 0 or 1 function will defurl return Theta.
	*
	*/

   	T operator[](const int i) const;

   	/*! Less then checkr 
	*
	* \
	* \pre T mudt have '<' defiend for it!
	* \post Will return true if T of calling object is
	* \less then T of RHS. False otherwise.
	*
	*/
    bool operator<(const Polar<T>& rhs) const;


   	/*! More then checkr 
	*
	* \
	* \pre T mudt have '>' defiend for it!
	* \post Will return true if T of calling object is
	* \more then T of RHS. False otherwise.
	*
	*/
    bool operator>(const Polar<T>& rhs) const;

   	/*! Is equel  checkr 
	*
	* \
	* \pre T mudt have '==' defiend for it!
	* \post Will return true if T of calling object is
	* \equel to T of RHS. False otherwise.
	*
	*/

    bool operator==(const Polar<T>& rhs) const;

    /*! Is Not equel  checkr 
	*
	* \
	* \pre T mudt have '!=' defiend for it!
	* \post Will return true if T of calling object is
	* \ not equel to T of RHS. False otherwise.
	*
	*/
    bool operator!=(const Polar<T>& rhs) const;

   /*! '-' Operator!
	*
	* \
	* \pre T mudt have '-' defiend for it!
	* \post A new Polar is created with same Theata as C.O
	* and with negated R as C.O
	*
	*/

    Polar<T> operator-() const;

    /* '*' Operator!
	*
	* \
	* \pre T mudt have * and + defiend for it!
	* \post R of C.O will be mulitplayed by R of RHS. 
	* Theta of C.O will be add to Theta of RHS
	*/

    Polar<T> operator* ( const Polar<T>& rhs) const;

    /* '/' Operator!
	*
	* \
	* \pre T mudt have / and - defiend for it! r of RHS can not
	* be equel to 0!
	* \post A new Polar is created with  C.O  be divded by R of RHS. 
	* Theta of C.O will be substracted to Theta of RHS
	*/


    Polar<T> operator/ ( const Polar<T>& rhs) const;
    T operator~ () const;
    Polar<T> operator! () const;

    friend ostream& operator<< <T> (ostream& out , const Polar<T> & p);

    T getR() const  {return m_r;}
    T getTheta() const {return m_theta;}
    void setR(const T r){m_r =r;}
    void setTheta(const T theta){m_theta =theta;}

};



#include "polar.hpp"
#endif
