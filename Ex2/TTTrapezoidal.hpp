#ifndef TTTRAPEZOIDAL_H
#define TTTRAPEZOIDAL_H
#include <iostream>
#include <cmath>
using namespace std;

template <double F(double)>
double trapezoidal(double a, double b, int n){
  double h = (b-a)/n;
  double integral=0.0;
  double* x;
  x = new double[n+1];
  for (unsigned int i = 0; i <= n; ++i) x[i] = a + i*h;
  for (unsigned int k = 1; k <= n+1; ++k) integral += (F(x[k-1]) + F(x[k]))*(h/2);
  return integral;
}
double integrand(double x) {return x*x;}
#endif
