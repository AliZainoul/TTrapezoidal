#ifndef TTTRAPEZOIDAL_H
#define TTTRAPEZOIDAL_H
#include <iostream>
#include <cmath>
using namespace std;

template <class T, T F(T)>
T trapezoidal(T a, T b, int n){
  T h = (b-a)/n;
  T integral=0.0;
  T* x;
  x = new T[n+1];
  for (unsigned int i = 0; i <= n; ++i) x[i] = a + i*h;
  for (unsigned int k = 1; k <= n+1; ++k) integral += (F(x[k-1]) + F(x[k]))*(h/2);
  return integral;
}
template<class T> T integrand(T x) {return x;}
#endif
