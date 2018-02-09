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
T Polar<T>::operator[] (const int i) const
{
  if (i == 0)
    return m_r;
  else 
    return m_theta;
}


template <typename T>  
bool Polar<T>::operator<(const Polar<T>& rhs) const
{
  return (m_r < rhs.m_r);
}

template <typename T>   
bool Polar<T>::operator>(const Polar<T>& rhs) const
{
  return (m_r > rhs.m_r);
}

template <typename T>   
bool Polar<T>::operator==(const Polar<T>& rhs) const
{ 
  return (m_r == rhs.m_r);
}

template <typename T>       
bool Polar<T>::operator!=(const Polar<T>& rhs) const
{
  return (m_r != rhs.m_r);
}


template <typename T>   
Polar<T> Polar<T>::operator-() const
{
  Polar<T> temp;
  temp.m_r = -m_r;
  temp.m_theta = m_theta;
  return temp;
}

template <typename T>   
 Polar<T> Polar<T>::operator*( const Polar<T>& rhs) const
{
  Polar<T> temp;
  temp.m_r = m_r*rhs.m_r;
  temp.m_theta = m_theta+rhs.m_theta;
  return temp;
}


template <typename T>   
 Polar<T> Polar<T>::operator/( const Polar<T>& rhs) const
{
  Polar<T> temp;
  temp.m_r = m_r/rhs.m_r;
  temp.m_theta = m_theta-rhs.m_theta;
  return temp;
}

template <typename T>   
T Polar<T>::operator~ () const
{
  return abs(m_r);
}

template <typename T>   
Polar<T> Polar<T>::operator!() const
{
  Polar<T> temp;
  temp.m_r = m_r;
  temp.m_theta = -m_theta;
  return temp;
}


template <typename T>   
 ostream& operator<< (ostream& out , const Polar<T> & p)
{

  out << "(" << p.m_r << 
  ", " << p.m_theta << ")";
  return out;
}
