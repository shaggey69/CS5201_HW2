/*
header file for Polars
 By: Ari Sherman
Class: CS5201 HW #2
Date: 2.12.18
*/

#ifndef POLAR_H
#define POLAR_H

#include <iostream>

using namespace std;

template <typename T>
class Polar 
{
  private:
    T m_r;
    T m_theta;

  public:
    Polar();
    Polar(const T r, const T theta);
    Polar(const Polar<T>& source);
    ~Polar();

    Polar<T>& operator= (const Polar<T>& rhs);
    const T operator[](const int i);

    bool operator<(const Polar<T>& rhs);
    bool operator>(const Polar<T>& rhs);
    bool operator==(const Polar<T>& rhs);
    bool operator!=(const Polar<T>& rhs);

    Polar<T>& operator-();
    Polar<T>& operator* ( const Polar<T>& rhs);
    Polar<T>& operator/ ( const Polar<T>& rhs);
    Polar<T>& operator~ ();
    Polar<T>& operator! ();

    //friend ostream& operator<<(ostream& out , const Polar<T> & p);
    void print() const;

    const T getR()  {return m_r;}
    const T getTheta()  {return m_theta;}
    void setR(const T r){m_r =r;}
    void setTheta(const T theta){m_theta =theta;}

};



#include "polar.hpp"
#endif
