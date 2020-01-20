#ifndef TRAPEZOIDAL_H
#define TRAPEZOIDAL_H
#include <iostream>
#include <cmath>
using namespace std;

template <class pfn>
double trapezoidal(double a, double b, pfn f, int n){
  double h = (b-a)/n;
  double integral=0.0;
  double* x;
  x = new double[n+1];
  for (unsigned int i = 0; i <= n; ++i) x[i] = a + i*h;
  for (unsigned int k = 1; k <= n+1; ++k) integral += (f(x[k-1]) +f(x[k]))*(h/2);
  return integral;
}

class integrand
{
public:
  double operator() (double x) {return x;} // Generic function
};


#endif
