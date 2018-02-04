/*
header function implments for Polars
By: Ari Sherman
Class: CS5201 HW #2
Date: 2.12.18
*/

#include <iostream>
#include <cmath>
using namespace std;

template <typename T>   
Polar<T>::Polar()
{
  m_r = 0;
  m_theta = 0;
}

template <typename T>   
Polar<T>::Polar(const T r, const T theta)
{
  m_r = r;
  m_theta = theta;
}

template <typename T>   
Polar<T>::Polar(const Polar<T>& source)
{
  m_r = source.m_r ;
  m_theta = source.m_theta;
}

template <typename T>   
Polar<T>::~Polar()
{}


template <typename T>   
Polar<T>& Polar<T>::operator= (const Polar<T>& rhs)
{
  m_r = rhs.m_r ;
  m_theta = rhs.m_theta;
  return (*this);
}


template <typename T>   
const T Polar<T>::operator[] (const int i)
{
  if (i == 0)
    return m_r;
  else
    return m_theta;
}



template <typename T>  
bool Polar<T>::operator<(const Polar<T>& rhs)
{
  return (m_r < rhs.m_r);
}

template <typename T>   
bool Polar<T>::operator>(const Polar<T>& rhs)
{
  return (m_r > rhs.m_r);
}

template <typename T>   
bool Polar<T>::operator==(const Polar<T>& rhs)
{ 
  return (m_r == rhs.m_r);
}

template <typename T>       
bool Polar<T>::operator!=(const Polar<T>& rhs)
{
  return (m_r != rhs.m_r);
}


template <typename T>   
Polar<T>& Polar<T>::operator-() 
{
  m_r = -m_r;
  return (*this);
}

template <typename T>   
 Polar<T>& Polar<T>::operator*( const Polar<T>& rhs)
{
  m_r = m_r*rhs.m_r;
  m_theta = m_theta*rhs.m_theta;
  return (*this);
}


template <typename T>   
 Polar<T>& Polar<T>::operator/( const Polar<T>& rhs)
{
  m_r = m_r/rhs.m_r;
  m_theta = m_theta-rhs.m_theta;
  return (*this);
}

template <typename T>   
Polar<T>& Polar<T>::operator~()
{
  m_r = abs(m_r);
  return (*this);

}

template <typename T>   
Polar<T>& Polar<T>::operator!()
{
  m_theta = -m_theta;
  return (*this);
}

/*
template <typename T>   
ostream& operator<< (ostream& out, const Polar<T> & p)
{

  out << " the R is: " << p.m_r << 
  "and the Theta is: " << p.m_theta << endl;
  return out;
}
*/

template <typename T>   
void Polar<T>::print() const
{
  cout << " the R is: " << m_r << 
  " and the Theta is: " << m_theta << endl;
  return;

}
