/*! \file
 *
 * A Polar library.
 */
/*
header function and implments for Norm class
By: Ari Sherman
Class: CS5201 HW #2
Date: 2.12.18
*/

#include "polar.h"
#include <vector>

/*!
 * the Norm class
*/

template <typename T>
class Norm
{
	/*! '()' Operator
	*
	* \
	* \pre T must have '+=' defiend for it!
	* \return the magnutute summation of all Polars in vecP
	* \post none
	*/
	public:
		T operator()(const vector<Polar<T> > & vecP) const;
};

//'()' Operator
template <typename T>
T Norm<T>::operator()(const vector<Polar<T> > & vecP) const
{
	T sum = 0;
	for ( auto &i : vecP )
	{
		sum += ~i;
	}
	return sum;
}
