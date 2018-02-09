
#include "polar.h"
#include <vector>

template <typename T>
class Norm
{
	public:
		T operator()(const vector<Polar<T> > & vecP);
};

template <typename T>
T Norm<T>::operator()(const vector<Polar<T> > & vecP)
{
	T sum = 0;
	for ( auto &i : vecP )
	{
		sum += ~i;
	}
	return sum;
}
