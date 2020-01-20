#ifndef TTRAPEZOIDAL_H
#define TTRAPEZOIDAL_H
#include <iostream>
#include <cmath>
using namespace std;
template <class T, class pfn>
T trapezoidal(T a, T b, pfn f, int n){
  T h = (b-a)/n;
  T integral=0.0;
  T* x;
  x = new T[n+1];
  for (unsigned int i = 0; i <= n; ++i) x[i] = a + i*h;
  for (unsigned int k = 1; k <= n+1; ++k) integral += (f(x[k-1]) +f(x[k]))*(h/2);
  return integral;
}
template <class T>
class integrand
{
public:
  T operator() (T x) {return x;}
};


#endif
